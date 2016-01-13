#ifndef ZERO_TRADER_SERVICE_IMPL_HH
#define ZERO_TRADER_SERVICE_IMPL_HH

#include <memory>
#include <atomic>

#include "zero/TraderService.hh"
#include "ZeusingFtdcTraderApi.h"

#include "soil/STimer.hh"

namespace zero
{

class TraderOptions;
class TraderSpiImpl;

class TraderServiceImpl : public TraderService
{
 public:
		
  TraderServiceImpl(soil::Options* options, TraderServiceCallback* callback);
		
  virtual ~TraderServiceImpl();

  virtual std::string tradingDay() ;

  virtual int orderOpenBuy(const std::string& instru,
                           double price, int volume);

  virtual int orderOpenBuyFAK(const std::string& instru,
                              double price, int volume);

  virtual int orderOpenBuyFOK(const std::string& instru,
                              double price, int volume);

  virtual int orderOpenSell(const std::string& instru,
                            double price, int volume);

  virtual int orderCloseBuy(const std::string& instru,
                            double price, int volume);

  virtual int orderCloseSell(const std::string& instru,
                            double price, int volume);

  void login();

  void settlementInfoConfirm();

  void initSession(CZeusingFtdcRspUserLoginField* pRspUserLogin);

  void wait(const std::string& hint="");
  
  void notify();

  TraderServiceCallback* callback() { return callback_; }
  
 protected:

  CZeusingFtdcInputOrderField* orderField(int& order_ref);

  void orderGo(CZeusingFtdcInputOrderField* req);
  
 private:
  
  TraderOptions* options_;
    
  CZeusingFtdcTraderApi* trader_api_;
  
  std::unique_ptr<TraderSpiImpl> trader_spi_;

  TraderServiceCallback* callback_;
  
  std::atomic_int request_id_;

  std::unique_ptr<soil::STimer> cond_;

  int front_id_;
  int session_id_;
  std::atomic_int max_order_ref_;
};

}; // namesapce zero

#endif // ZERO_TRADER_SERVICE_IMPL_HH
