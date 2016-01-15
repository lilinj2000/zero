#include "TraderServiceImpl.hh"

#include "ZeroLog.hh"
#include "TraderOptions.hh"
#include "TraderSpiImpl.hh"

#include "ZeusingFtdcUserApiStructPrint.hh"

namespace zero
{

TraderServiceImpl::TraderServiceImpl(soil::Options* options, TraderServiceCallback* callback) :
    trader_api_(NULL),
    callback_(callback),
    front_id_(-1),
    session_id_(-1),
    max_order_ref_(-1)
{
  ZERO_TRACE <<"TraderServiceImpl::TraderServiceImpl()" ;

  cond_.reset( soil::STimer::create() );

  options_ = dynamic_cast<TraderOptions*>(options);
  
  trader_api_ = CZeusingFtdcTraderApi::CreateFtdcTraderApi(options_->flow_path.data());

  trader_spi_.reset( new TraderSpiImpl(this) );
  
  trader_api_->RegisterSpi( trader_spi_.get() );

  // ZEUSING_TERT_QUICK
  // ZEUSING_TERT_RESUME
  trader_api_->SubscribePrivateTopic(ZEUSING_TERT_QUICK);
  
  trader_api_->SubscribePublicTopic(ZEUSING_TERT_QUICK);

  trader_api_->RegisterFront( const_cast<char*>(options_->front_address.data()) );

  trader_api_->Init();

  wait("login");

  settlementInfoConfirm();
  
  wait("settlementInfoConfirm");

}

TraderServiceImpl::~TraderServiceImpl()
{
  ZERO_TRACE <<"TraderServiceImpl::~TraderServiceImpl()" ;
  
  trader_api_->RegisterSpi(NULL);
  
  trader_api_->Release();
  
  trader_api_ = NULL;
}


std::string TraderServiceImpl::tradingDay()
{
  ZERO_TRACE <<"TraderServiceImpl::tradingDate()" ;

  return trader_api_->GetTradingDay();
}

int TraderServiceImpl::orderOpenBuy(const std::string& instru,
                                    double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderOpenBuy()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open buy failed.");
  }
  
  return order_ref;
}

int TraderServiceImpl::orderOpenBuyFAK(const std::string& instru,
                                       double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderOpenBuyFAK()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  req->TimeCondition = ZEUSING_FTDC_TC_IOC;
  

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open buy FAK failed.");
  }
  
  return order_ref;

}

int TraderServiceImpl::orderOpenBuyFOK(const std::string& instru,
                                       double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderOpenBuyFOK()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  req->TimeCondition = ZEUSING_FTDC_TC_IOC;
  req->VolumeCondition = ZEUSING_FTDC_VC_CV;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open buy FOK failed.");
  }
  
  return order_ref;

}


int TraderServiceImpl::orderOpenSell(const std::string& instru,
                                      double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderOpenSell()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Sell;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open sell failed.");
  }

  return order_ref;
}

int TraderServiceImpl::orderOpenSellFAK(const std::string& instru,
                                       double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderOpenSellFAK()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Sell;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  req->TimeCondition = ZEUSING_FTDC_TC_IOC;
  
  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open sell FAK failed.");
  }
  
  return order_ref;

}

int TraderServiceImpl::orderOpenSellFOK(const std::string& instru,
                                       double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderOpenSellFOK()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Sell;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;

  req->TimeCondition = ZEUSING_FTDC_TC_IOC;
  req->VolumeCondition = ZEUSING_FTDC_VC_CV;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order open sell FOK failed.");
  }
  
  return order_ref;

}


int TraderServiceImpl::orderCloseBuy(const std::string& instru,
                                     double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderCloseBuy()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Buy;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;
  req->CombOffsetFlag[0] = ZEUSING_FTDC_OF_CloseToday;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order close buy failed.");
  }

  return order_ref;

}

int TraderServiceImpl::orderCloseSell(const std::string& instru,
                                     double price, int volume)
{
  ZERO_TRACE <<"TraderServiceImpl::orderCloseSell()" ;

  ZERO_DEBUG <<"instru: " <<instru
            <<"\t price: " <<price
            <<"\t volume: " <<volume;

  int order_ref = -1;

  std::unique_ptr<CZeusingFtdcInputOrderField> req( orderField(order_ref) );

  strncpy(req->InstrumentID, instru.data(), sizeof(req->InstrumentID));
  req->Direction = ZEUSING_FTDC_D_Sell;
  req->LimitPrice = price;
  req->VolumeTotalOriginal = volume;
  req->CombOffsetFlag[0] = ZEUSING_FTDC_OF_CloseToday;

  try
  {
    orderGo( req.get() );
  }
  catch( ... )
  {
    throw std::runtime_error("order close sell failed.");
  }

  return order_ref;

}

int TraderServiceImpl::queryAccount()
{
  ZERO_TRACE <<"TraderServiceImpl::queryAccount()" ;

  CZeusingFtdcQryTradingAccountField req;
  memset(&req, 0x0, sizeof(req));
  
  strncpy( req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID) );
  strncpy( req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID) );

  ZERO_PDU <<req;
  
  int result = trader_api_->ReqQryTradingAccount(&req, ++request_id_);

  if( result!=0 )
  {
    ZERO_ERROR <<"return code " <<result;
    throw std::runtime_error("query account failed.");
  }

}

void TraderServiceImpl::initSession(CZeusingFtdcRspUserLoginField* pRspUserLogin)
{
  front_id_ = pRspUserLogin->FrontID;
  session_id_ = pRspUserLogin->SessionID;

  max_order_ref_ = atoi(pRspUserLogin->MaxOrderRef);
}

void TraderServiceImpl::authenticate()
{
  ZERO_TRACE <<"TraderServiceImpl::authenticate()" ;

  CZeusingFtdcReqAuthenticateField req;
  memset(&req, 0x0, sizeof(req));
  
  strncpy( req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID) );
  strncpy( req.UserID, options_->user_id.data(), sizeof(req.UserID) );
  strncpy( req.UserProductInfo, options_->user_product_info.data(), sizeof(req.UserProductInfo) );
  strncpy( req.AuthCode, options_->auth_code.data(), sizeof(req.AuthCode) );

  ZERO_PDU <<req;
  
  int result = trader_api_->ReqAuthenticate(&req, ++request_id_);

  if( result!=0 )
  {
    ZERO_ERROR <<"return code " <<result;
    throw std::runtime_error("authenticate failed.");
  }

}

void TraderServiceImpl::login()
{
  ZERO_TRACE <<"TraderServiceImpl::login()" ;

  CZeusingFtdcReqUserLoginField req;
  memset(&req, 0x0, sizeof(req));
  
  strncpy( req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID) );
  strncpy( req.UserID, options_->user_id.data(), sizeof(req.UserID) );
  strncpy( req.Password, options_->password.data(), sizeof(req.Password) );
  strncpy( req.UserProductInfo, options_->user_product_info.data(), sizeof(req.UserProductInfo) );

  ZERO_PDU <<req;
  
  int result = trader_api_->ReqUserLogin(&req, ++request_id_);

  if( result!=0 )
  {
    ZERO_ERROR <<"return code " <<result;
    throw std::runtime_error("login failed.");
  }

}

void TraderServiceImpl::settlementInfoConfirm()
{
  ZERO_TRACE <<"TraderSerivceImpl::settlementInfoConfirm()" ;

  CZeusingFtdcSettlementInfoConfirmField req;
  memset(&req, 0x0, sizeof(req));
  
  strncpy( req.BrokerID, options_->broker_id.data(), sizeof(req.BrokerID) );
  strncpy( req.InvestorID, options_->investor_id.data(), sizeof(req.InvestorID) );

  ZERO_PDU <<req;

  int result = trader_api_->ReqSettlementInfoConfirm(&req, ++request_id_);

  if( result!=0 )
  {
    ZERO_ERROR <<"return code " <<result;
    throw std::runtime_error("settlement info confirm failed.");
  }

}

void TraderServiceImpl::wait(const std::string& hint)
{
  if( cond_->wait(2000) )
  {
    if( !hint.empty() )
      throw std::runtime_error(hint + " time out");
  }
}

void TraderServiceImpl::notify()
{
  cond_->notifyAll();
}

CZeusingFtdcInputOrderField* TraderServiceImpl::orderField(int& order_ref)
{
  std::unique_ptr<CZeusingFtdcInputOrderField> req( new CZeusingFtdcInputOrderField() );

  order_ref = max_order_ref_++;
  
  strncpy(req->BrokerID, options_->broker_id.data(), sizeof(req->BrokerID));
  strncpy(req->InvestorID, options_->investor_id.data(), sizeof(req->InvestorID));

  char OrderRef[13];
  snprintf(OrderRef, sizeof(OrderRef), "%d", order_ref);
  strncpy(req->OrderRef, OrderRef, sizeof(req->OrderRef));
  
  strncpy(req->UserID, options_->user_id.data(), sizeof(req->UserID));
  req->OrderPriceType = ZEUSING_FTDC_OPT_LimitPrice;

  // req->CombOffsetFlag[0] = ZEUSING_FTDC_OF_Open;
  req->CombOffsetFlag[0] = ZEUSING_FTDC_OF_Open;
  
  req->CombHedgeFlag[0] = ZEUSING_FTDC_OPT_AnyPrice;
  req->TimeCondition = ZEUSING_FTDC_TC_GFD;
  req->VolumeCondition = ZEUSING_FTDC_VC_AV;
  req->MinVolume = 1;
  req->ContingentCondition = ZEUSING_FTDC_CC_Immediately;
  req->ForceCloseReason = ZEUSING_FTDC_FCC_NotForceClose;
  req->IsAutoSuspend = 0;

  return req.release();
}

void TraderServiceImpl::orderGo(CZeusingFtdcInputOrderField* req)
{
  ZERO_TRACE <<"TraderServiceImpl::orderGo()";
  
  ZERO_PDU <<*req;
  
  int result = trader_api_->ReqOrderInsert(req, ++request_id_);

  if( result!=0 )
  {
    ZERO_ERROR <<"return code " <<result;
    throw ;
  }
}

soil::Options* TraderService::createOptions()
{
  return new TraderOptions();
}

TraderService* TraderService::createService(soil::Options* options, TraderServiceCallback* callback)
{
  return new TraderServiceImpl(options, callback);
}

} // namespace zero
