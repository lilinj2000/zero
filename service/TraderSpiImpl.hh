// Copyright (c) 2010
// All rights reserved.

#ifndef ZERO_TRADER_SPI_IMPL_HH
#define ZERO_TRADER_SPI_IMPL_HH

#include "ZeusingFtdcTraderApi.h"

namespace zero {

class TraderServiceImpl;
class TraderSpiImpl : public CZeusingFtdcTraderSpi {
 public:
  explicit TraderSpiImpl(TraderServiceImpl* service);
  virtual ~TraderSpiImpl();

  // interface from CZeusingFtdcTraderSpi
  virtual void OnFrontConnected();

  virtual void OnFrontDisconnected(int nReason);

  virtual void OnHeartBeatWarning(int nTimeLapse);

  virtual void OnRspAuthenticate(
      CZeusingFtdcRspAuthenticateField *pRspAuthenticateField,
      CZeusingFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspUserLogin(
      CZeusingFtdcRspUserLoginField *pRspUserLogin,
      CZeusingFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspOrderInsert(
      CZeusingFtdcInputOrderField *pInputOrder,
      CZeusingFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspSettlementInfoConfirm(
      CZeusingFtdcSettlementInfoConfirmField *pSettlementInfoConfirm,
      CZeusingFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspQryTradingAccount(
      CZeusingFtdcTradingAccountField *pTradingAccount,
      CZeusingFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRspError(
      CZeusingFtdcRspInfoField *pRspInfo,
      int nRequestID,
      bool bIsLast);

  virtual void OnRtnOrder(
      CZeusingFtdcOrderField *pOrder);

  virtual void OnRtnTrade(
      CZeusingFtdcTradeField *pTrade);

  virtual void OnErrRtnOrderInsert(
      CZeusingFtdcInputOrderField *pInputOrder,
      CZeusingFtdcRspInfoField *pRspInfo);

 protected:
    void checkRspInfo(
        CZeusingFtdcRspInfoField *pRspInfo);

 private:
  TraderServiceImpl* service_;
};

}  // namespace zero

#endif  // ZERO_TRADER_SPI_IMPL_HH
