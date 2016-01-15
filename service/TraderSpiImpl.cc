#include "TraderSpiImpl.hh"
#include "TraderServiceImpl.hh"
#include "TraderOptions.hh"
#include "ZeroLog.hh"

#include "ZeusingFtdcUserApiStructPrint.hh"

namespace zero
{

TraderSpiImpl::TraderSpiImpl(TraderServiceImpl* service) :
    service_(service)
{
  ZERO_TRACE <<"TraderSpiImpl::TraderSpiImpl()" ;
}

TraderSpiImpl::~TraderSpiImpl()
{
  ZERO_TRACE <<"TraderSpiImpl::~TraderSpiImpl()" ;
}

/////////////////////////////////////////
// impl from CZeusingFtdcSpi
/////////////////////////////////////////
void TraderSpiImpl::OnFrontConnected()
{
  ZERO_TRACE <<"TraderSpiImpl::OnFrontConnected()" ;

  if( service_->options()->is_auth_force )
  {
    service_->authenticate();
  }
  else
  {
    service_->login();
  }
}

void TraderSpiImpl::OnFrontDisconnected(int nReason)
{
  ZERO_TRACE <<"TraderSpiImpl::OnFrontDisconnected()" ;

  ZERO_INFO <<"OnFrontDisconnected, the Reason is " <<std::hex <<nReason ;
}

void TraderSpiImpl::OnHeartBeatWarning(int nTimeLapse)
{
  ZERO_TRACE <<"TraderSpiImpl::OnHeartBeatWarning()" ;

  ZERO_INFO <<"OnHeartBeatWarning, the time lapse is "<<nTimeLapse ;
}

void TraderSpiImpl::OnRspAuthenticate(CZeusingFtdcRspAuthenticateField *pRspAuthenticateField, CZeusingFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRspAuthenticate()" ;

  try
  {
    checkRspInfo(pRspInfo);
    
    ZERO_PDU <<*pRspAuthenticateField;

                          
    if( bIsLast )
      service_->login();

  }
  catch( ... )
  {
  }
  
  
}

void TraderSpiImpl::OnRspUserLogin(CZeusingFtdcRspUserLoginField *pRspUserLogin,
                           CZeusingFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRspUserLogin()" ;

  try
  {
    checkRspInfo(pRspInfo);
    
    ZERO_PDU <<*pRspUserLogin;

    service_->initSession( pRspUserLogin );
                          
    if( bIsLast )
      service_->notify();

  }
  catch( ... )
  {
  }
  
}

void TraderSpiImpl::OnRspSettlementInfoConfirm(CZeusingFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CZeusingFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRspSettlementInfoConfirm()" ;

  try
  {
    checkRspInfo(pRspInfo);
    
    ZERO_PDU <<*pSettlementInfoConfirm;

    if( bIsLast )
      service_->notify();

  }
  catch( ... )
  {
  }

}

void TraderSpiImpl::OnRspQryTradingAccount(CZeusingFtdcTradingAccountField *pTradingAccount, CZeusingFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRspQryTradingAccount()" ;

  try
  {
    checkRspInfo(pRspInfo);
    
    ZERO_PDU <<*pTradingAccount;
  }
  catch( ... )
  {
  }

}

void TraderSpiImpl::OnRspError(CZeusingFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRspError()" ;

  if( pRspInfo )
    ZERO_PDU <<*pRspInfo;
  
}

void TraderSpiImpl::OnRspOrderInsert(CZeusingFtdcInputOrderField *pInputOrder, CZeusingFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRspOrderInsert()" ;

  try
  {
    checkRspInfo(pRspInfo);
    
    ZERO_PDU <<*pInputOrder;

    if( service_->callback() )
    {
      int order_ref = atoi(pInputOrder->OrderRef);
      
      service_->callback()->onRspOrderInsert( order_ref );
    }

  }
  catch( ... )
  {
  }

}

void TraderSpiImpl::OnRtnOrder(CZeusingFtdcOrderField *pOrder)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRtnOrder()" ;

  if( pOrder )
    ZERO_PDU <<*pOrder;

  if( service_->callback() )
  {
    int order_ref = atoi(pOrder->OrderRef);

    std::string order_status;
    order_status.push_back(pOrder->OrderStatus);
    std::string status_msg = pOrder->StatusMsg;
    
    service_->callback()->onRtnOrder( order_ref, order_status, status_msg );
  }

  
}

void TraderSpiImpl::OnRtnTrade(CZeusingFtdcTradeField *pTrade)
{
  ZERO_TRACE <<"TraderSpiImpl::OnRtnTrade()" ;

  if( pTrade )
    ZERO_PDU <<*pTrade;

  if( service_->callback() )
  {
    int order_ref = atoi(pTrade->OrderRef);

    double price = pTrade->Price;
    double volume = pTrade->Volume;
    
    service_->callback()->onRtnTrade( order_ref, price, volume );
  }

}

void TraderSpiImpl::OnErrRtnOrderInsert(CZeusingFtdcInputOrderField *pInputOrder, CZeusingFtdcRspInfoField *pRspInfo)
{
  ZERO_TRACE <<"TraderSpiImpl::OneErrRtnOrderInsert()" ;

  try
  {
    checkRspInfo(pRspInfo);
    
    ZERO_PDU <<*pInputOrder;

  }
  catch( ... )
  {
  }

}

void TraderSpiImpl::checkRspInfo(CZeusingFtdcRspInfoField *pRspInfo)
{
  ZERO_TRACE <<"TraderSpiImpl::checkRspInfo()" ;

  if( pRspInfo )
    ZERO_PDU <<*pRspInfo ;
  
  bool result = ((pRspInfo) && (pRspInfo->ErrorID != 0));
  
  if (result)
  {
    std::stringstream err_stream;
    err_stream <<"ErrorID=" <<pRspInfo->ErrorID <<","
               <<"ErrorMsg=" <<pRspInfo->ErrorMsg;

    throw std::runtime_error(err_stream.str());
  }
  
}


} // namespace zero
