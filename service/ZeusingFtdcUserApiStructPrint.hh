#ifndef ZEUSINGFTDC_USERAPI_STRUCT_PRINT_HH
#define ZEUSINGFTDC_USERAPI_STRUCT_PRINT_HH

#include <ostream>
#include "ZeusingFtdcUserApiStruct.h"

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcDisseminationField const& aDisseminationField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcDisseminationField\": {" <<std::endl;
    os <<"        \"SequenceSeries\": \"" <<aDisseminationField.SequenceSeries  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aDisseminationField.SequenceNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqUserLoginField const& aReqUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqUserLoginField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqUserLoginField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqUserLoginField.Password  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aReqUserLoginField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"InterfaceProductInfo\": \"" <<aReqUserLoginField.InterfaceProductInfo  <<"\"," <<std::endl;
    os <<"        \"ProtocolInfo\": \"" <<aReqUserLoginField.ProtocolInfo  <<"\"," <<std::endl;
    os <<"        \"MacAddress\": \"" <<aReqUserLoginField.MacAddress  <<"\"," <<std::endl;
    os <<"        \"OneTimePassword\": \"" <<aReqUserLoginField.OneTimePassword  <<"\"," <<std::endl;
    os <<"        \"ClientIPAddress\": \"" <<aReqUserLoginField.ClientIPAddress  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspUserLoginField const& aRspUserLoginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspUserLoginField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspUserLoginField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"LoginTime\": \"" <<aRspUserLoginField.LoginTime  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspUserLoginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspUserLoginField.UserID  <<"\"," <<std::endl;
    os <<"        \"SystemName\": \"" <<aRspUserLoginField.SystemName  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aRspUserLoginField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspUserLoginField.SessionID  <<"\"," <<std::endl;
    os <<"        \"MaxOrderRef\": \"" <<aRspUserLoginField.MaxOrderRef  <<"\"," <<std::endl;
    os <<"        \"SHFETime\": \"" <<aRspUserLoginField.SHFETime  <<"\"," <<std::endl;
    os <<"        \"DCETime\": \"" <<aRspUserLoginField.DCETime  <<"\"," <<std::endl;
    os <<"        \"CZCETime\": \"" <<aRspUserLoginField.CZCETime  <<"\"," <<std::endl;
    os <<"        \"FFEXTime\": \"" <<aRspUserLoginField.FFEXTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcUserLogoutField const& aUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcForceUserLogoutField const& aForceUserLogoutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcForceUserLogoutField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aForceUserLogoutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aForceUserLogoutField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqAuthenticateField const& aReqAuthenticateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqAuthenticateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqAuthenticateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqAuthenticateField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aReqAuthenticateField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"AuthCode\": \"" <<aReqAuthenticateField.AuthCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspAuthenticateField const& aRspAuthenticateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspAuthenticateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspAuthenticateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspAuthenticateField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aRspAuthenticateField.UserProductInfo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcAuthenticationInfoField const& aAuthenticationInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcAuthenticationInfoField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aAuthenticationInfoField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aAuthenticationInfoField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aAuthenticationInfoField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"AuthInfo\": \"" <<aAuthenticationInfoField.AuthInfo  <<"\"," <<std::endl;
    os <<"        \"IsResult\": \"" <<aAuthenticationInfoField.IsResult  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferHeaderField const& aTransferHeaderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferHeaderField\": {" <<std::endl;
    os <<"        \"Version\": \"" <<aTransferHeaderField.Version  <<"\"," <<std::endl;
    os <<"        \"TradeCode\": \"" <<aTransferHeaderField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aTransferHeaderField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aTransferHeaderField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"TradeSerial\": \"" <<aTransferHeaderField.TradeSerial  <<"\"," <<std::endl;
    os <<"        \"FutureID\": \"" <<aTransferHeaderField.FutureID  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aTransferHeaderField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBrchID\": \"" <<aTransferHeaderField.BankBrchID  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aTransferHeaderField.OperNo  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aTransferHeaderField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"RecordNum\": \"" <<aTransferHeaderField.RecordNum  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aTransferHeaderField.SessionID  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aTransferHeaderField.RequestID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferBankToFutureReqField const& aTransferBankToFutureReqField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferBankToFutureReqField\": {" <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferBankToFutureReqField.FutureAccount  <<"\"," <<std::endl;
    os <<"        \"FuturePwdFlag\": \"" <<aTransferBankToFutureReqField.FuturePwdFlag  <<"\"," <<std::endl;
    os <<"        \"FutureAccPwd\": \"" <<aTransferBankToFutureReqField.FutureAccPwd  <<"\"," <<std::endl;
    os <<"        \"TradeAmt\": \"" <<aTransferBankToFutureReqField.TradeAmt  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aTransferBankToFutureReqField.CustFee  <<"\"," <<std::endl;
    os <<"        \"CurrencyCode\": \"" <<aTransferBankToFutureReqField.CurrencyCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferBankToFutureRspField const& aTransferBankToFutureRspField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferBankToFutureRspField\": {" <<std::endl;
    os <<"        \"RetCode\": \"" <<aTransferBankToFutureRspField.RetCode  <<"\"," <<std::endl;
    os <<"        \"RetInfo\": \"" <<aTransferBankToFutureRspField.RetInfo  <<"\"," <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferBankToFutureRspField.FutureAccount  <<"\"," <<std::endl;
    os <<"        \"TradeAmt\": \"" <<aTransferBankToFutureRspField.TradeAmt  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aTransferBankToFutureRspField.CustFee  <<"\"," <<std::endl;
    os <<"        \"CurrencyCode\": \"" <<aTransferBankToFutureRspField.CurrencyCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferFutureToBankReqField const& aTransferFutureToBankReqField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferFutureToBankReqField\": {" <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferFutureToBankReqField.FutureAccount  <<"\"," <<std::endl;
    os <<"        \"FuturePwdFlag\": \"" <<aTransferFutureToBankReqField.FuturePwdFlag  <<"\"," <<std::endl;
    os <<"        \"FutureAccPwd\": \"" <<aTransferFutureToBankReqField.FutureAccPwd  <<"\"," <<std::endl;
    os <<"        \"TradeAmt\": \"" <<aTransferFutureToBankReqField.TradeAmt  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aTransferFutureToBankReqField.CustFee  <<"\"," <<std::endl;
    os <<"        \"CurrencyCode\": \"" <<aTransferFutureToBankReqField.CurrencyCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferFutureToBankRspField const& aTransferFutureToBankRspField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferFutureToBankRspField\": {" <<std::endl;
    os <<"        \"RetCode\": \"" <<aTransferFutureToBankRspField.RetCode  <<"\"," <<std::endl;
    os <<"        \"RetInfo\": \"" <<aTransferFutureToBankRspField.RetInfo  <<"\"," <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferFutureToBankRspField.FutureAccount  <<"\"," <<std::endl;
    os <<"        \"TradeAmt\": \"" <<aTransferFutureToBankRspField.TradeAmt  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aTransferFutureToBankRspField.CustFee  <<"\"," <<std::endl;
    os <<"        \"CurrencyCode\": \"" <<aTransferFutureToBankRspField.CurrencyCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferQryBankReqField const& aTransferQryBankReqField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferQryBankReqField\": {" <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferQryBankReqField.FutureAccount  <<"\"," <<std::endl;
    os <<"        \"FuturePwdFlag\": \"" <<aTransferQryBankReqField.FuturePwdFlag  <<"\"," <<std::endl;
    os <<"        \"FutureAccPwd\": \"" <<aTransferQryBankReqField.FutureAccPwd  <<"\"," <<std::endl;
    os <<"        \"CurrencyCode\": \"" <<aTransferQryBankReqField.CurrencyCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferQryBankRspField const& aTransferQryBankRspField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferQryBankRspField\": {" <<std::endl;
    os <<"        \"RetCode\": \"" <<aTransferQryBankRspField.RetCode  <<"\"," <<std::endl;
    os <<"        \"RetInfo\": \"" <<aTransferQryBankRspField.RetInfo  <<"\"," <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferQryBankRspField.FutureAccount  <<"\"," <<std::endl;
    os <<"        \"TradeAmt\": \"" <<aTransferQryBankRspField.TradeAmt  <<"\"," <<std::endl;
    os <<"        \"UseAmt\": \"" <<aTransferQryBankRspField.UseAmt  <<"\"," <<std::endl;
    os <<"        \"FetchAmt\": \"" <<aTransferQryBankRspField.FetchAmt  <<"\"," <<std::endl;
    os <<"        \"CurrencyCode\": \"" <<aTransferQryBankRspField.CurrencyCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferQryDetailReqField const& aTransferQryDetailReqField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferQryDetailReqField\": {" <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferQryDetailReqField.FutureAccount  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferQryDetailRspField const& aTransferQryDetailRspField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferQryDetailRspField\": {" <<std::endl;
    os <<"        \"TradeDate\": \"" <<aTransferQryDetailRspField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aTransferQryDetailRspField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"TradeCode\": \"" <<aTransferQryDetailRspField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aTransferQryDetailRspField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"FutureID\": \"" <<aTransferQryDetailRspField.FutureID  <<"\"," <<std::endl;
    os <<"        \"FutureAccount\": \"" <<aTransferQryDetailRspField.FutureAccount  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aTransferQryDetailRspField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aTransferQryDetailRspField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBrchID\": \"" <<aTransferQryDetailRspField.BankBrchID  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aTransferQryDetailRspField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"CertCode\": \"" <<aTransferQryDetailRspField.CertCode  <<"\"," <<std::endl;
    os <<"        \"CurrencyCode\": \"" <<aTransferQryDetailRspField.CurrencyCode  <<"\"," <<std::endl;
    os <<"        \"TxAmount\": \"" <<aTransferQryDetailRspField.TxAmount  <<"\"," <<std::endl;
    os <<"        \"Flag\": \"" <<aTransferQryDetailRspField.Flag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspInfoField const& aRspInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspInfoField\": {" <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspInfoField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspInfoField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeField const& aExchangeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeName\": \"" <<aExchangeField.ExchangeName  <<"\"," <<std::endl;
    os <<"        \"ExchangeProperty\": \"" <<aExchangeField.ExchangeProperty  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcProductField const& aProductField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcProductField\": {" <<std::endl;
    os <<"        \"ProductID\": \"" <<aProductField.ProductID  <<"\"," <<std::endl;
    os <<"        \"ProductName\": \"" <<aProductField.ProductName  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aProductField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ProductClass\": \"" <<aProductField.ProductClass  <<"\"," <<std::endl;
    os <<"        \"VolumeMultiple\": \"" <<aProductField.VolumeMultiple  <<"\"," <<std::endl;
    os <<"        \"PriceTick\": \"" <<aProductField.PriceTick  <<"\"," <<std::endl;
    os <<"        \"MaxMarketOrderVolume\": \"" <<aProductField.MaxMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinMarketOrderVolume\": \"" <<aProductField.MinMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MaxLimitOrderVolume\": \"" <<aProductField.MaxLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinLimitOrderVolume\": \"" <<aProductField.MinLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"PositionType\": \"" <<aProductField.PositionType  <<"\"," <<std::endl;
    os <<"        \"PositionDateType\": \"" <<aProductField.PositionDateType  <<"\"," <<std::endl;
    os <<"        \"CloseDealType\": \"" <<aProductField.CloseDealType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInstrumentField const& aInstrumentField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInstrumentField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInstrumentField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInstrumentField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InstrumentName\": \"" <<aInstrumentField.InstrumentName  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aInstrumentField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"ProductID\": \"" <<aInstrumentField.ProductID  <<"\"," <<std::endl;
    os <<"        \"ProductClass\": \"" <<aInstrumentField.ProductClass  <<"\"," <<std::endl;
    os <<"        \"DeliveryYear\": \"" <<aInstrumentField.DeliveryYear  <<"\"," <<std::endl;
    os <<"        \"DeliveryMonth\": \"" <<aInstrumentField.DeliveryMonth  <<"\"," <<std::endl;
    os <<"        \"MaxMarketOrderVolume\": \"" <<aInstrumentField.MaxMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinMarketOrderVolume\": \"" <<aInstrumentField.MinMarketOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MaxLimitOrderVolume\": \"" <<aInstrumentField.MaxLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"MinLimitOrderVolume\": \"" <<aInstrumentField.MinLimitOrderVolume  <<"\"," <<std::endl;
    os <<"        \"VolumeMultiple\": \"" <<aInstrumentField.VolumeMultiple  <<"\"," <<std::endl;
    os <<"        \"PriceTick\": \"" <<aInstrumentField.PriceTick  <<"\"," <<std::endl;
    os <<"        \"CreateDate\": \"" <<aInstrumentField.CreateDate  <<"\"," <<std::endl;
    os <<"        \"OpenDate\": \"" <<aInstrumentField.OpenDate  <<"\"," <<std::endl;
    os <<"        \"ExpireDate\": \"" <<aInstrumentField.ExpireDate  <<"\"," <<std::endl;
    os <<"        \"StartDelivDate\": \"" <<aInstrumentField.StartDelivDate  <<"\"," <<std::endl;
    os <<"        \"EndDelivDate\": \"" <<aInstrumentField.EndDelivDate  <<"\"," <<std::endl;
    os <<"        \"InstLifePhase\": \"" <<aInstrumentField.InstLifePhase  <<"\"," <<std::endl;
    os <<"        \"IsTrading\": \"" <<aInstrumentField.IsTrading  <<"\"," <<std::endl;
    os <<"        \"PositionType\": \"" <<aInstrumentField.PositionType  <<"\"," <<std::endl;
    os <<"        \"PositionDateType\": \"" <<aInstrumentField.PositionDateType  <<"\"," <<std::endl;
    os <<"        \"MaxMarginSideAlgorithm\": \"" <<aInstrumentField.MaxMarginSideAlgorithm  <<"\"," <<std::endl;
    os <<"        \"UnderlyingInstrID\": \"" <<aInstrumentField.UnderlyingInstrID  <<"\"," <<std::endl;
    os <<"        \"StrikePrice\": \"" <<aInstrumentField.StrikePrice  <<"\"," <<std::endl;
    os <<"        \"OptionsType\": \"" <<aInstrumentField.OptionsType  <<"\"," <<std::endl;
    os <<"        \"UnderlyingMultiple\": \"" <<aInstrumentField.UnderlyingMultiple  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerField const& aBrokerField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerAbbr\": \"" <<aBrokerField.BrokerAbbr  <<"\"," <<std::endl;
    os <<"        \"BrokerName\": \"" <<aBrokerField.BrokerName  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aBrokerField.IsActive  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTraderField const& aTraderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTraderField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aTraderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aTraderField.TraderID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aTraderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aTraderField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallCount\": \"" <<aTraderField.InstallCount  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTraderField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorField const& aInvestorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorField\": {" <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorGroupID\": \"" <<aInvestorField.InvestorGroupID  <<"\"," <<std::endl;
    os <<"        \"InvestorName\": \"" <<aInvestorField.InvestorName  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardType\": \"" <<aInvestorField.IdentifiedCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aInvestorField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aInvestorField.IsActive  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aInvestorField.Telephone  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aInvestorField.Address  <<"\"," <<std::endl;
    os <<"        \"OpenDate\": \"" <<aInvestorField.OpenDate  <<"\"," <<std::endl;
    os <<"        \"Mobile\": \"" <<aInvestorField.Mobile  <<"\"," <<std::endl;
    os <<"        \"CommModelID\": \"" <<aInvestorField.CommModelID  <<"\"," <<std::endl;
    os <<"        \"PadField\": \"" <<aInvestorField.PadField  <<"\"," <<std::endl;
    os <<"        \"MarginModelID\": \"" <<aInvestorField.MarginModelID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradingCodeField const& aTradingCodeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradingCodeField\": {" <<std::endl;
    os <<"        \"InvestorID\": \"" <<aTradingCodeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradingCodeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aTradingCodeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aTradingCodeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aTradingCodeField.IsActive  <<"\"," <<std::endl;
    os <<"        \"ClientIDType\": \"" <<aTradingCodeField.ClientIDType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcPartBrokerField const& aPartBrokerField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcPartBrokerField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aPartBrokerField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aPartBrokerField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aPartBrokerField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aPartBrokerField.IsActive  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSuperUserField const& aSuperUserField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSuperUserField\": {" <<std::endl;
    os <<"        \"UserID\": \"" <<aSuperUserField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserName\": \"" <<aSuperUserField.UserName  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aSuperUserField.Password  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aSuperUserField.IsActive  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSuperUserFunctionField const& aSuperUserFunctionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSuperUserFunctionField\": {" <<std::endl;
    os <<"        \"UserID\": \"" <<aSuperUserFunctionField.UserID  <<"\"," <<std::endl;
    os <<"        \"FunctionCode\": \"" <<aSuperUserFunctionField.FunctionCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorGroupField const& aInvestorGroupField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorGroupField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorGroupField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorGroupID\": \"" <<aInvestorGroupField.InvestorGroupID  <<"\"," <<std::endl;
    os <<"        \"InvestorGroupName\": \"" <<aInvestorGroupField.InvestorGroupName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradingAccountField const& aTradingAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradingAccountField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradingAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aTradingAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"PreMortgage\": \"" <<aTradingAccountField.PreMortgage  <<"\"," <<std::endl;
    os <<"        \"PreCredit\": \"" <<aTradingAccountField.PreCredit  <<"\"," <<std::endl;
    os <<"        \"PreDeposit\": \"" <<aTradingAccountField.PreDeposit  <<"\"," <<std::endl;
    os <<"        \"PreBalance\": \"" <<aTradingAccountField.PreBalance  <<"\"," <<std::endl;
    os <<"        \"PreMargin\": \"" <<aTradingAccountField.PreMargin  <<"\"," <<std::endl;
    os <<"        \"InterestBase\": \"" <<aTradingAccountField.InterestBase  <<"\"," <<std::endl;
    os <<"        \"Interest\": \"" <<aTradingAccountField.Interest  <<"\"," <<std::endl;
    os <<"        \"Deposit\": \"" <<aTradingAccountField.Deposit  <<"\"," <<std::endl;
    os <<"        \"Withdraw\": \"" <<aTradingAccountField.Withdraw  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aTradingAccountField.FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenCash\": \"" <<aTradingAccountField.FrozenCash  <<"\"," <<std::endl;
    os <<"        \"FrozenCommission\": \"" <<aTradingAccountField.FrozenCommission  <<"\"," <<std::endl;
    os <<"        \"CurrMargin\": \"" <<aTradingAccountField.CurrMargin  <<"\"," <<std::endl;
    os <<"        \"CashIn\": \"" <<aTradingAccountField.CashIn  <<"\"," <<std::endl;
    os <<"        \"Commission\": \"" <<aTradingAccountField.Commission  <<"\"," <<std::endl;
    os <<"        \"CloseProfit\": \"" <<aTradingAccountField.CloseProfit  <<"\"," <<std::endl;
    os <<"        \"PositionProfit\": \"" <<aTradingAccountField.PositionProfit  <<"\"," <<std::endl;
    os <<"        \"Balance\": \"" <<aTradingAccountField.Balance  <<"\"," <<std::endl;
    os <<"        \"Available\": \"" <<aTradingAccountField.Available  <<"\"," <<std::endl;
    os <<"        \"WithdrawQuota\": \"" <<aTradingAccountField.WithdrawQuota  <<"\"," <<std::endl;
    os <<"        \"Reserve\": \"" <<aTradingAccountField.Reserve  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aTradingAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aTradingAccountField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"Credit\": \"" <<aTradingAccountField.Credit  <<"\"," <<std::endl;
    os <<"        \"Mortgage\": \"" <<aTradingAccountField.Mortgage  <<"\"," <<std::endl;
    os <<"        \"ExchangeMargin\": \"" <<aTradingAccountField.ExchangeMargin  <<"\"," <<std::endl;
    os <<"        \"DeliveryMargin\": \"" <<aTradingAccountField.DeliveryMargin  <<"\"," <<std::endl;
    os <<"        \"ExchangeDeliveryMargin\": \"" <<aTradingAccountField.ExchangeDeliveryMargin  <<"\"," <<std::endl;
    os <<"        \"ReserveBalance\": \"" <<aTradingAccountField.ReserveBalance  <<"\"," <<std::endl;
    os <<"        \"OptionCloseProfit\": \"" <<aTradingAccountField.OptionCloseProfit  <<"\"," <<std::endl;
    os <<"        \"AccountLevel\": \"" <<aTradingAccountField.AccountLevel  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorPositionField const& aInvestorPositionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorPositionField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInvestorPositionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInvestorPositionField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorPositionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorPositionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"PosiDirection\": \"" <<aInvestorPositionField.PosiDirection  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInvestorPositionField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"PositionDate\": \"" <<aInvestorPositionField.PositionDate  <<"\"," <<std::endl;
    os <<"        \"YdPosition\": \"" <<aInvestorPositionField.YdPosition  <<"\"," <<std::endl;
    os <<"        \"Position\": \"" <<aInvestorPositionField.Position  <<"\"," <<std::endl;
    os <<"        \"LongFrozen\": \"" <<aInvestorPositionField.LongFrozen  <<"\"," <<std::endl;
    os <<"        \"ShortFrozen\": \"" <<aInvestorPositionField.ShortFrozen  <<"\"," <<std::endl;
    os <<"        \"LongFrozenAmount\": \"" <<aInvestorPositionField.LongFrozenAmount  <<"\"," <<std::endl;
    os <<"        \"ShortFrozenAmount\": \"" <<aInvestorPositionField.ShortFrozenAmount  <<"\"," <<std::endl;
    os <<"        \"OpenVolume\": \"" <<aInvestorPositionField.OpenVolume  <<"\"," <<std::endl;
    os <<"        \"CloseVolume\": \"" <<aInvestorPositionField.CloseVolume  <<"\"," <<std::endl;
    os <<"        \"OpenAmount\": \"" <<aInvestorPositionField.OpenAmount  <<"\"," <<std::endl;
    os <<"        \"CloseAmount\": \"" <<aInvestorPositionField.CloseAmount  <<"\"," <<std::endl;
    os <<"        \"YdCloseAmount\": \"" <<aInvestorPositionField.YdCloseAmount  <<"\"," <<std::endl;
    os <<"        \"YdCloseVolume\": \"" <<aInvestorPositionField.YdCloseVolume  <<"\"," <<std::endl;
    os <<"        \"PositionCost\": \"" <<aInvestorPositionField.PositionCost  <<"\"," <<std::endl;
    os <<"        \"PreMargin\": \"" <<aInvestorPositionField.PreMargin  <<"\"," <<std::endl;
    os <<"        \"UseMargin\": \"" <<aInvestorPositionField.UseMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aInvestorPositionField.FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenCash\": \"" <<aInvestorPositionField.FrozenCash  <<"\"," <<std::endl;
    os <<"        \"FrozenCommission\": \"" <<aInvestorPositionField.FrozenCommission  <<"\"," <<std::endl;
    os <<"        \"CashIn\": \"" <<aInvestorPositionField.CashIn  <<"\"," <<std::endl;
    os <<"        \"Commission\": \"" <<aInvestorPositionField.Commission  <<"\"," <<std::endl;
    os <<"        \"CloseProfit\": \"" <<aInvestorPositionField.CloseProfit  <<"\"," <<std::endl;
    os <<"        \"PositionProfit\": \"" <<aInvestorPositionField.PositionProfit  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aInvestorPositionField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aInvestorPositionField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aInvestorPositionField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aInvestorPositionField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"OpenCost\": \"" <<aInvestorPositionField.OpenCost  <<"\"," <<std::endl;
    os <<"        \"ExchangeMargin\": \"" <<aInvestorPositionField.ExchangeMargin  <<"\"," <<std::endl;
    os <<"        \"CombPosition\": \"" <<aInvestorPositionField.CombPosition  <<"\"," <<std::endl;
    os <<"        \"CombLongFrozen\": \"" <<aInvestorPositionField.CombLongFrozen  <<"\"," <<std::endl;
    os <<"        \"CombShortFrozen\": \"" <<aInvestorPositionField.CombShortFrozen  <<"\"," <<std::endl;
    os <<"        \"CloseProfitByDate\": \"" <<aInvestorPositionField.CloseProfitByDate  <<"\"," <<std::endl;
    os <<"        \"CloseProfitByTrade\": \"" <<aInvestorPositionField.CloseProfitByTrade  <<"\"," <<std::endl;
    os <<"        \"TodayPosition\": \"" <<aInvestorPositionField.TodayPosition  <<"\"," <<std::endl;
    os <<"        \"MarginRateByMoney\": \"" <<aInvestorPositionField.MarginRateByMoney  <<"\"," <<std::endl;
    os <<"        \"MarginRateByVolume\": \"" <<aInvestorPositionField.MarginRateByVolume  <<"\"," <<std::endl;
    os <<"        \"StrikeFrozen\": \"" <<aInvestorPositionField.StrikeFrozen  <<"\"," <<std::endl;
    os <<"        \"StrikeFrozenAmount\": \"" <<aInvestorPositionField.StrikeFrozenAmount  <<"\"," <<std::endl;
    os <<"        \"AbandonFrozen\": \"" <<aInvestorPositionField.AbandonFrozen  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInstrumentMarginRateField const& aInstrumentMarginRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInstrumentMarginRateField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInstrumentMarginRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInstrumentMarginRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aInstrumentMarginRateField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInstrumentMarginRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInstrumentMarginRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInstrumentMarginRateField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByMoney\": \"" <<aInstrumentMarginRateField.LongMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByVolume\": \"" <<aInstrumentMarginRateField.LongMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByMoney\": \"" <<aInstrumentMarginRateField.ShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByVolume\": \"" <<aInstrumentMarginRateField.ShortMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"IsRelative\": \"" <<aInstrumentMarginRateField.IsRelative  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInstrumentCommissionRateField const& aInstrumentCommissionRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInstrumentCommissionRateField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInstrumentCommissionRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInstrumentCommissionRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aInstrumentCommissionRateField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInstrumentCommissionRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInstrumentCommissionRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInstrumentCommissionRateField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"OpenRatioByMoney\": \"" <<aInstrumentCommissionRateField.OpenRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"OpenRatioByVolume\": \"" <<aInstrumentCommissionRateField.OpenRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"CloseRatioByMoney\": \"" <<aInstrumentCommissionRateField.CloseRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"CloseRatioByVolume\": \"" <<aInstrumentCommissionRateField.CloseRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"CloseTodayRatioByMoney\": \"" <<aInstrumentCommissionRateField.CloseTodayRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"CloseTodayRatioByVolume\": \"" <<aInstrumentCommissionRateField.CloseTodayRatioByVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcDepthMarketDataField const& aDepthMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcDepthMarketDataField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aDepthMarketDataField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aDepthMarketDataField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aDepthMarketDataField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aDepthMarketDataField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aDepthMarketDataField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aDepthMarketDataField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aDepthMarketDataField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aDepthMarketDataField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aDepthMarketDataField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aDepthMarketDataField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aDepthMarketDataField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aDepthMarketDataField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aDepthMarketDataField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aDepthMarketDataField.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aDepthMarketDataField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aDepthMarketDataField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aDepthMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aDepthMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aDepthMarketDataField.PreDelta  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aDepthMarketDataField.CurrDelta  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aDepthMarketDataField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aDepthMarketDataField.UpdateMillisec  <<"\"," <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aDepthMarketDataField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aDepthMarketDataField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aDepthMarketDataField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aDepthMarketDataField.AskVolume1  <<"\"," <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aDepthMarketDataField.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aDepthMarketDataField.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aDepthMarketDataField.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aDepthMarketDataField.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aDepthMarketDataField.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aDepthMarketDataField.BidVolume3  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aDepthMarketDataField.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aDepthMarketDataField.AskVolume3  <<"\"," <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aDepthMarketDataField.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aDepthMarketDataField.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aDepthMarketDataField.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aDepthMarketDataField.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aDepthMarketDataField.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aDepthMarketDataField.BidVolume5  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aDepthMarketDataField.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aDepthMarketDataField.AskVolume5  <<"\"," <<std::endl;
    os <<"        \"AveragePrice\": \"" <<aDepthMarketDataField.AveragePrice  <<"\"," <<std::endl;
    os <<"        \"ActionDay\": \"" <<aDepthMarketDataField.ActionDay  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInstrumentTradingRightField const& aInstrumentTradingRightField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInstrumentTradingRightField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInstrumentTradingRightField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInstrumentTradingRightField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aInstrumentTradingRightField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInstrumentTradingRightField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInstrumentTradingRightField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"TradingRight\": \"" <<aInstrumentTradingRightField.TradingRight  <<"\"," <<std::endl;
    os <<"        \"QuoteTradingRight\": \"" <<aInstrumentTradingRightField.QuoteTradingRight  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerUserField const& aBrokerUserField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerUserField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerUserField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aBrokerUserField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserName\": \"" <<aBrokerUserField.UserName  <<"\"," <<std::endl;
    os <<"        \"UserType\": \"" <<aBrokerUserField.UserType  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aBrokerUserField.IsActive  <<"\"," <<std::endl;
    os <<"        \"IsUsingOTP\": \"" <<aBrokerUserField.IsUsingOTP  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerUserPasswordField const& aBrokerUserPasswordField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerUserPasswordField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerUserPasswordField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aBrokerUserPasswordField.UserID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aBrokerUserPasswordField.Password  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerUserFunctionField const& aBrokerUserFunctionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerUserFunctionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerUserFunctionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aBrokerUserFunctionField.UserID  <<"\"," <<std::endl;
    os <<"        \"BrokerFunctionCode\": \"" <<aBrokerUserFunctionField.BrokerFunctionCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTraderOfferField const& aTraderOfferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTraderOfferField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aTraderOfferField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aTraderOfferField.TraderID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aTraderOfferField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aTraderOfferField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aTraderOfferField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aTraderOfferField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TraderConnectStatus\": \"" <<aTraderOfferField.TraderConnectStatus  <<"\"," <<std::endl;
    os <<"        \"ConnectRequestDate\": \"" <<aTraderOfferField.ConnectRequestDate  <<"\"," <<std::endl;
    os <<"        \"ConnectRequestTime\": \"" <<aTraderOfferField.ConnectRequestTime  <<"\"," <<std::endl;
    os <<"        \"LastReportDate\": \"" <<aTraderOfferField.LastReportDate  <<"\"," <<std::endl;
    os <<"        \"LastReportTime\": \"" <<aTraderOfferField.LastReportTime  <<"\"," <<std::endl;
    os <<"        \"ConnectDate\": \"" <<aTraderOfferField.ConnectDate  <<"\"," <<std::endl;
    os <<"        \"ConnectTime\": \"" <<aTraderOfferField.ConnectTime  <<"\"," <<std::endl;
    os <<"        \"StartDate\": \"" <<aTraderOfferField.StartDate  <<"\"," <<std::endl;
    os <<"        \"StartTime\": \"" <<aTraderOfferField.StartTime  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aTraderOfferField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTraderOfferField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"MaxTradeID\": \"" <<aTraderOfferField.MaxTradeID  <<"\"," <<std::endl;
    os <<"        \"MaxOrderMessageReference\": \"" <<aTraderOfferField.MaxOrderMessageReference  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSettlementInfoField const& aSettlementInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSettlementInfoField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aSettlementInfoField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aSettlementInfoField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSettlementInfoField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSettlementInfoField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aSettlementInfoField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"Content\": \"" <<aSettlementInfoField.Content  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInstrumentMarginRateAdjustField const& aInstrumentMarginRateAdjustField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInstrumentMarginRateAdjustField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInstrumentMarginRateAdjustField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInstrumentMarginRateAdjustField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aInstrumentMarginRateAdjustField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInstrumentMarginRateAdjustField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInstrumentMarginRateAdjustField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInstrumentMarginRateAdjustField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByMoney\": \"" <<aInstrumentMarginRateAdjustField.LongMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByVolume\": \"" <<aInstrumentMarginRateAdjustField.LongMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByMoney\": \"" <<aInstrumentMarginRateAdjustField.ShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByVolume\": \"" <<aInstrumentMarginRateAdjustField.ShortMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"IsRelative\": \"" <<aInstrumentMarginRateAdjustField.IsRelative  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeMarginRateField const& aExchangeMarginRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeMarginRateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExchangeMarginRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeMarginRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aExchangeMarginRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aExchangeMarginRateField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByMoney\": \"" <<aExchangeMarginRateField.LongMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByVolume\": \"" <<aExchangeMarginRateField.LongMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByMoney\": \"" <<aExchangeMarginRateField.ShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByVolume\": \"" <<aExchangeMarginRateField.ShortMarginRatioByVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeMarginRateAdjustField const& aExchangeMarginRateAdjustField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeMarginRateAdjustField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExchangeMarginRateAdjustField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeMarginRateAdjustField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aExchangeMarginRateAdjustField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aExchangeMarginRateAdjustField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByMoney\": \"" <<aExchangeMarginRateAdjustField.LongMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByVolume\": \"" <<aExchangeMarginRateAdjustField.LongMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByMoney\": \"" <<aExchangeMarginRateAdjustField.ShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByVolume\": \"" <<aExchangeMarginRateAdjustField.ShortMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"ExchLongMarginRatioByMoney\": \"" <<aExchangeMarginRateAdjustField.ExchLongMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ExchLongMarginRatioByVolume\": \"" <<aExchangeMarginRateAdjustField.ExchLongMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"ExchShortMarginRatioByMoney\": \"" <<aExchangeMarginRateAdjustField.ExchShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ExchShortMarginRatioByVolume\": \"" <<aExchangeMarginRateAdjustField.ExchShortMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"NoLongMarginRatioByMoney\": \"" <<aExchangeMarginRateAdjustField.NoLongMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"NoLongMarginRatioByVolume\": \"" <<aExchangeMarginRateAdjustField.NoLongMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"NoShortMarginRatioByMoney\": \"" <<aExchangeMarginRateAdjustField.NoShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"NoShortMarginRatioByVolume\": \"" <<aExchangeMarginRateAdjustField.NoShortMarginRatioByVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSettlementRefField const& aSettlementRefField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSettlementRefField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aSettlementRefField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aSettlementRefField.SettlementID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcCurrentTimeField const& aCurrentTimeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcCurrentTimeField\": {" <<std::endl;
    os <<"        \"CurrDate\": \"" <<aCurrentTimeField.CurrDate  <<"\"," <<std::endl;
    os <<"        \"CurrTime\": \"" <<aCurrentTimeField.CurrTime  <<"\"," <<std::endl;
    os <<"        \"CurrMillisec\": \"" <<aCurrentTimeField.CurrMillisec  <<"\"," <<std::endl;
    os <<"        \"ActionDay\": \"" <<aCurrentTimeField.ActionDay  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcCommPhaseField const& aCommPhaseField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcCommPhaseField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aCommPhaseField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"CommPhaseNo\": \"" <<aCommPhaseField.CommPhaseNo  <<"\"," <<std::endl;
    os <<"        \"SystemID\": \"" <<aCommPhaseField.SystemID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcLoginInfoField const& aLoginInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcLoginInfoField\": {" <<std::endl;
    os <<"        \"FrontID\": \"" <<aLoginInfoField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aLoginInfoField.SessionID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aLoginInfoField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aLoginInfoField.UserID  <<"\"," <<std::endl;
    os <<"        \"LoginDate\": \"" <<aLoginInfoField.LoginDate  <<"\"," <<std::endl;
    os <<"        \"LoginTime\": \"" <<aLoginInfoField.LoginTime  <<"\"," <<std::endl;
    os <<"        \"IPAddress\": \"" <<aLoginInfoField.IPAddress  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aLoginInfoField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"InterfaceProductInfo\": \"" <<aLoginInfoField.InterfaceProductInfo  <<"\"," <<std::endl;
    os <<"        \"ProtocolInfo\": \"" <<aLoginInfoField.ProtocolInfo  <<"\"," <<std::endl;
    os <<"        \"SystemName\": \"" <<aLoginInfoField.SystemName  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aLoginInfoField.Password  <<"\"," <<std::endl;
    os <<"        \"MaxOrderRef\": \"" <<aLoginInfoField.MaxOrderRef  <<"\"," <<std::endl;
    os <<"        \"SHFETime\": \"" <<aLoginInfoField.SHFETime  <<"\"," <<std::endl;
    os <<"        \"DCETime\": \"" <<aLoginInfoField.DCETime  <<"\"," <<std::endl;
    os <<"        \"CZCETime\": \"" <<aLoginInfoField.CZCETime  <<"\"," <<std::endl;
    os <<"        \"FFEXTime\": \"" <<aLoginInfoField.FFEXTime  <<"\"," <<std::endl;
    os <<"        \"MacAddress\": \"" <<aLoginInfoField.MacAddress  <<"\"," <<std::endl;
    os <<"        \"OneTimePassword\": \"" <<aLoginInfoField.OneTimePassword  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcLogoutAllField const& aLogoutAllField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcLogoutAllField\": {" <<std::endl;
    os <<"        \"FrontID\": \"" <<aLogoutAllField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aLogoutAllField.SessionID  <<"\"," <<std::endl;
    os <<"        \"SystemName\": \"" <<aLogoutAllField.SystemName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcFrontStatusField const& aFrontStatusField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcFrontStatusField\": {" <<std::endl;
    os <<"        \"FrontID\": \"" <<aFrontStatusField.FrontID  <<"\"," <<std::endl;
    os <<"        \"LastReportDate\": \"" <<aFrontStatusField.LastReportDate  <<"\"," <<std::endl;
    os <<"        \"LastReportTime\": \"" <<aFrontStatusField.LastReportTime  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aFrontStatusField.IsActive  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcUserPasswordUpdateField const& aUserPasswordUpdateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcUserPasswordUpdateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserPasswordUpdateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserPasswordUpdateField.UserID  <<"\"," <<std::endl;
    os <<"        \"OldPassword\": \"" <<aUserPasswordUpdateField.OldPassword  <<"\"," <<std::endl;
    os <<"        \"NewPassword\": \"" <<aUserPasswordUpdateField.NewPassword  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInputOrderField const& aInputOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInputOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aInputOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aInputOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aInputOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"CombOffsetFlag\": \"" <<aInputOrderField.CombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"CombHedgeFlag\": \"" <<aInputOrderField.CombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aInputOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeTotalOriginal\": \"" <<aInputOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aInputOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aInputOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aInputOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aInputOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"ContingentCondition\": \"" <<aInputOrderField.ContingentCondition  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aInputOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aInputOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aInputOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aInputOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aInputOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"UserForceClose\": \"" <<aInputOrderField.UserForceClose  <<"\"," <<std::endl;
    os <<"        \"IsSwapOrder\": \"" <<aInputOrderField.IsSwapOrder  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcOrderField const& aOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"CombOffsetFlag\": \"" <<aOrderField.CombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"CombHedgeFlag\": \"" <<aOrderField.CombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeTotalOriginal\": \"" <<aOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"ContingentCondition\": \"" <<aOrderField.ContingentCondition  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aOrderField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aOrderField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aOrderField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aOrderField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderSubmitStatus\": \"" <<aOrderField.OrderSubmitStatus  <<"\"," <<std::endl;
    os <<"        \"NotifySequence\": \"" <<aOrderField.NotifySequence  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aOrderField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aOrderField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"OrderSource\": \"" <<aOrderField.OrderSource  <<"\"," <<std::endl;
    os <<"        \"OrderStatus\": \"" <<aOrderField.OrderStatus  <<"\"," <<std::endl;
    os <<"        \"OrderType\": \"" <<aOrderField.OrderType  <<"\"," <<std::endl;
    os <<"        \"VolumeTraded\": \"" <<aOrderField.VolumeTraded  <<"\"," <<std::endl;
    os <<"        \"VolumeTotal\": \"" <<aOrderField.VolumeTotal  <<"\"," <<std::endl;
    os <<"        \"InsertDate\": \"" <<aOrderField.InsertDate  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aOrderField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTime\": \"" <<aOrderField.ActiveTime  <<"\"," <<std::endl;
    os <<"        \"SuspendTime\": \"" <<aOrderField.SuspendTime  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aOrderField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aOrderField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTraderID\": \"" <<aOrderField.ActiveTraderID  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aOrderField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aOrderField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aOrderField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aOrderField.SessionID  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aOrderField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aOrderField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"UserForceClose\": \"" <<aOrderField.UserForceClose  <<"\"," <<std::endl;
    os <<"        \"ActiveUserID\": \"" <<aOrderField.ActiveUserID  <<"\"," <<std::endl;
    os <<"        \"BrokerOrderSeq\": \"" <<aOrderField.BrokerOrderSeq  <<"\"," <<std::endl;
    os <<"        \"RelativeOrderSysID\": \"" <<aOrderField.RelativeOrderSysID  <<"\"," <<std::endl;
    os <<"        \"ZCETotalTradedVolume\": \"" <<aOrderField.ZCETotalTradedVolume  <<"\"," <<std::endl;
    os <<"        \"IsSwapOrder\": \"" <<aOrderField.IsSwapOrder  <<"\"," <<std::endl;
    os <<"        \"ClientIDType\": \"" <<aOrderField.ClientIDType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeOrderField const& aExchangeOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeOrderField\": {" <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aExchangeOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aExchangeOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"CombOffsetFlag\": \"" <<aExchangeOrderField.CombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"CombHedgeFlag\": \"" <<aExchangeOrderField.CombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aExchangeOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeTotalOriginal\": \"" <<aExchangeOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aExchangeOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aExchangeOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aExchangeOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aExchangeOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"ContingentCondition\": \"" <<aExchangeOrderField.ContingentCondition  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aExchangeOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aExchangeOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aExchangeOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExchangeOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aExchangeOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aExchangeOrderField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchangeOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExchangeOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aExchangeOrderField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeOrderField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchangeOrderField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderSubmitStatus\": \"" <<aExchangeOrderField.OrderSubmitStatus  <<"\"," <<std::endl;
    os <<"        \"NotifySequence\": \"" <<aExchangeOrderField.NotifySequence  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aExchangeOrderField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aExchangeOrderField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aExchangeOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"OrderSource\": \"" <<aExchangeOrderField.OrderSource  <<"\"," <<std::endl;
    os <<"        \"OrderStatus\": \"" <<aExchangeOrderField.OrderStatus  <<"\"," <<std::endl;
    os <<"        \"OrderType\": \"" <<aExchangeOrderField.OrderType  <<"\"," <<std::endl;
    os <<"        \"VolumeTraded\": \"" <<aExchangeOrderField.VolumeTraded  <<"\"," <<std::endl;
    os <<"        \"VolumeTotal\": \"" <<aExchangeOrderField.VolumeTotal  <<"\"," <<std::endl;
    os <<"        \"InsertDate\": \"" <<aExchangeOrderField.InsertDate  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aExchangeOrderField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTime\": \"" <<aExchangeOrderField.ActiveTime  <<"\"," <<std::endl;
    os <<"        \"SuspendTime\": \"" <<aExchangeOrderField.SuspendTime  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aExchangeOrderField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aExchangeOrderField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTraderID\": \"" <<aExchangeOrderField.ActiveTraderID  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aExchangeOrderField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aExchangeOrderField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExchangeOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExchangeOrderField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeOrderInsertErrorField const& aExchangeOrderInsertErrorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeOrderInsertErrorField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeOrderInsertErrorField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchangeOrderInsertErrorField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeOrderInsertErrorField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchangeOrderInsertErrorField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aExchangeOrderInsertErrorField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aExchangeOrderInsertErrorField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aExchangeOrderInsertErrorField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInputOrderActionField const& aInputOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInputOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"OrderActionRef\": \"" <<aInputOrderActionField.OrderActionRef  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aInputOrderActionField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aInputOrderActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aInputOrderActionField.Direction  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aInputOrderActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aInputOrderActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInputOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aInputOrderActionField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aInputOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aInputOrderActionField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeChange\": \"" <<aInputOrderActionField.VolumeChange  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputOrderActionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcOrderActionField const& aOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"OrderActionRef\": \"" <<aOrderActionField.OrderActionRef  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aOrderActionField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aOrderActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aOrderActionField.Direction  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aOrderActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aOrderActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aOrderActionField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aOrderActionField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeChange\": \"" <<aOrderActionField.VolumeChange  <<"\"," <<std::endl;
    os <<"        \"ActionDate\": \"" <<aOrderActionField.ActionDate  <<"\"," <<std::endl;
    os <<"        \"ActionTime\": \"" <<aOrderActionField.ActionTime  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aOrderActionField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aOrderActionField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aOrderActionField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionLocalID\": \"" <<aOrderActionField.ActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aOrderActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aOrderActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aOrderActionField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OrderActionStatus\": \"" <<aOrderActionField.OrderActionStatus  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aOrderActionField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aOrderActionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeOrderActionField const& aExchangeOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeOrderActionField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aExchangeOrderActionField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aExchangeOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aExchangeOrderActionField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeChange\": \"" <<aExchangeOrderActionField.VolumeChange  <<"\"," <<std::endl;
    os <<"        \"ActionDate\": \"" <<aExchangeOrderActionField.ActionDate  <<"\"," <<std::endl;
    os <<"        \"ActionTime\": \"" <<aExchangeOrderActionField.ActionTime  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeOrderActionField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchangeOrderActionField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aExchangeOrderActionField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionLocalID\": \"" <<aExchangeOrderActionField.ActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchangeOrderActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExchangeOrderActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExchangeOrderActionField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OrderActionStatus\": \"" <<aExchangeOrderActionField.OrderActionStatus  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aExchangeOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExchangeOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExchangeOrderActionField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeOrderActionErrorField const& aExchangeOrderActionErrorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeOrderActionErrorField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeOrderActionErrorField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aExchangeOrderActionErrorField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeOrderActionErrorField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchangeOrderActionErrorField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aExchangeOrderActionErrorField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionLocalID\": \"" <<aExchangeOrderActionErrorField.ActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aExchangeOrderActionErrorField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aExchangeOrderActionErrorField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeTradeField const& aExchangeTradeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeTradeField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeTradeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TradeID\": \"" <<aExchangeTradeField.TradeID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aExchangeTradeField.Direction  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aExchangeTradeField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchangeTradeField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExchangeTradeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"TradingRole\": \"" <<aExchangeTradeField.TradingRole  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aExchangeTradeField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aExchangeTradeField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aExchangeTradeField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"Price\": \"" <<aExchangeTradeField.Price  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aExchangeTradeField.Volume  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aExchangeTradeField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aExchangeTradeField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"TradeType\": \"" <<aExchangeTradeField.TradeType  <<"\"," <<std::endl;
    os <<"        \"PriceSource\": \"" <<aExchangeTradeField.PriceSource  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeTradeField.TraderID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aExchangeTradeField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aExchangeTradeField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExchangeTradeField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aExchangeTradeField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"TradeSource\": \"" <<aExchangeTradeField.TradeSource  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExchangeTradeField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradeField const& aTradeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aTradeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aTradeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aTradeField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aTradeField.UserID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aTradeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TradeID\": \"" <<aTradeField.TradeID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aTradeField.Direction  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aTradeField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aTradeField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aTradeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"TradingRole\": \"" <<aTradeField.TradingRole  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aTradeField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aTradeField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aTradeField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"Price\": \"" <<aTradeField.Price  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aTradeField.Volume  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aTradeField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aTradeField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"TradeType\": \"" <<aTradeField.TradeType  <<"\"," <<std::endl;
    os <<"        \"PriceSource\": \"" <<aTradeField.PriceSource  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aTradeField.TraderID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aTradeField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aTradeField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aTradeField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aTradeField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aTradeField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aTradeField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"BrokerOrderSeq\": \"" <<aTradeField.BrokerOrderSeq  <<"\"," <<std::endl;
    os <<"        \"TradeSource\": \"" <<aTradeField.TradeSource  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcUserSessionField const& aUserSessionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcUserSessionField\": {" <<std::endl;
    os <<"        \"FrontID\": \"" <<aUserSessionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aUserSessionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserSessionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserSessionField.UserID  <<"\"," <<std::endl;
    os <<"        \"LoginDate\": \"" <<aUserSessionField.LoginDate  <<"\"," <<std::endl;
    os <<"        \"LoginTime\": \"" <<aUserSessionField.LoginTime  <<"\"," <<std::endl;
    os <<"        \"IPAddress\": \"" <<aUserSessionField.IPAddress  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aUserSessionField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"InterfaceProductInfo\": \"" <<aUserSessionField.InterfaceProductInfo  <<"\"," <<std::endl;
    os <<"        \"ProtocolInfo\": \"" <<aUserSessionField.ProtocolInfo  <<"\"," <<std::endl;
    os <<"        \"MacAddress\": \"" <<aUserSessionField.MacAddress  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQueryMaxOrderVolumeField const& aQueryMaxOrderVolumeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQueryMaxOrderVolumeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQueryMaxOrderVolumeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQueryMaxOrderVolumeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQueryMaxOrderVolumeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQueryMaxOrderVolumeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aQueryMaxOrderVolumeField.Direction  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aQueryMaxOrderVolumeField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aQueryMaxOrderVolumeField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"MaxVolume\": \"" <<aQueryMaxOrderVolumeField.MaxVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSettlementInfoConfirmField const& aSettlementInfoConfirmField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSettlementInfoConfirmField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSettlementInfoConfirmField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSettlementInfoConfirmField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ConfirmDate\": \"" <<aSettlementInfoConfirmField.ConfirmDate  <<"\"," <<std::endl;
    os <<"        \"ConfirmTime\": \"" <<aSettlementInfoConfirmField.ConfirmTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncDepositField const& aSyncDepositField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncDepositField\": {" <<std::endl;
    os <<"        \"DepositSeqNo\": \"" <<aSyncDepositField.DepositSeqNo  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncDepositField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSyncDepositField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"Deposit\": \"" <<aSyncDepositField.Deposit  <<"\"," <<std::endl;
    os <<"        \"IsForce\": \"" <<aSyncDepositField.IsForce  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerSyncField const& aBrokerSyncField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerSyncField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerSyncField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingInvestorField const& aSyncingInvestorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingInvestorField\": {" <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSyncingInvestorField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingInvestorField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorGroupID\": \"" <<aSyncingInvestorField.InvestorGroupID  <<"\"," <<std::endl;
    os <<"        \"InvestorName\": \"" <<aSyncingInvestorField.InvestorName  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardType\": \"" <<aSyncingInvestorField.IdentifiedCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aSyncingInvestorField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aSyncingInvestorField.IsActive  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aSyncingInvestorField.Telephone  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aSyncingInvestorField.Address  <<"\"," <<std::endl;
    os <<"        \"OpenDate\": \"" <<aSyncingInvestorField.OpenDate  <<"\"," <<std::endl;
    os <<"        \"Mobile\": \"" <<aSyncingInvestorField.Mobile  <<"\"," <<std::endl;
    os <<"        \"CommModelID\": \"" <<aSyncingInvestorField.CommModelID  <<"\"," <<std::endl;
    os <<"        \"PadField\": \"" <<aSyncingInvestorField.PadField  <<"\"," <<std::endl;
    os <<"        \"MarginModelID\": \"" <<aSyncingInvestorField.MarginModelID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingTradingCodeField const& aSyncingTradingCodeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingTradingCodeField\": {" <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSyncingTradingCodeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingTradingCodeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aSyncingTradingCodeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aSyncingTradingCodeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aSyncingTradingCodeField.IsActive  <<"\"," <<std::endl;
    os <<"        \"ClientIDType\": \"" <<aSyncingTradingCodeField.ClientIDType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingInvestorGroupField const& aSyncingInvestorGroupField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingInvestorGroupField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingInvestorGroupField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorGroupID\": \"" <<aSyncingInvestorGroupField.InvestorGroupID  <<"\"," <<std::endl;
    os <<"        \"InvestorGroupName\": \"" <<aSyncingInvestorGroupField.InvestorGroupName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingTradingAccountField const& aSyncingTradingAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingTradingAccountField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingTradingAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aSyncingTradingAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"PreMortgage\": \"" <<aSyncingTradingAccountField.PreMortgage  <<"\"," <<std::endl;
    os <<"        \"PreCredit\": \"" <<aSyncingTradingAccountField.PreCredit  <<"\"," <<std::endl;
    os <<"        \"PreDeposit\": \"" <<aSyncingTradingAccountField.PreDeposit  <<"\"," <<std::endl;
    os <<"        \"PreBalance\": \"" <<aSyncingTradingAccountField.PreBalance  <<"\"," <<std::endl;
    os <<"        \"PreMargin\": \"" <<aSyncingTradingAccountField.PreMargin  <<"\"," <<std::endl;
    os <<"        \"InterestBase\": \"" <<aSyncingTradingAccountField.InterestBase  <<"\"," <<std::endl;
    os <<"        \"Interest\": \"" <<aSyncingTradingAccountField.Interest  <<"\"," <<std::endl;
    os <<"        \"Deposit\": \"" <<aSyncingTradingAccountField.Deposit  <<"\"," <<std::endl;
    os <<"        \"Withdraw\": \"" <<aSyncingTradingAccountField.Withdraw  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aSyncingTradingAccountField.FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenCash\": \"" <<aSyncingTradingAccountField.FrozenCash  <<"\"," <<std::endl;
    os <<"        \"FrozenCommission\": \"" <<aSyncingTradingAccountField.FrozenCommission  <<"\"," <<std::endl;
    os <<"        \"CurrMargin\": \"" <<aSyncingTradingAccountField.CurrMargin  <<"\"," <<std::endl;
    os <<"        \"CashIn\": \"" <<aSyncingTradingAccountField.CashIn  <<"\"," <<std::endl;
    os <<"        \"Commission\": \"" <<aSyncingTradingAccountField.Commission  <<"\"," <<std::endl;
    os <<"        \"CloseProfit\": \"" <<aSyncingTradingAccountField.CloseProfit  <<"\"," <<std::endl;
    os <<"        \"PositionProfit\": \"" <<aSyncingTradingAccountField.PositionProfit  <<"\"," <<std::endl;
    os <<"        \"Balance\": \"" <<aSyncingTradingAccountField.Balance  <<"\"," <<std::endl;
    os <<"        \"Available\": \"" <<aSyncingTradingAccountField.Available  <<"\"," <<std::endl;
    os <<"        \"WithdrawQuota\": \"" <<aSyncingTradingAccountField.WithdrawQuota  <<"\"," <<std::endl;
    os <<"        \"Reserve\": \"" <<aSyncingTradingAccountField.Reserve  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aSyncingTradingAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aSyncingTradingAccountField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"Credit\": \"" <<aSyncingTradingAccountField.Credit  <<"\"," <<std::endl;
    os <<"        \"Mortgage\": \"" <<aSyncingTradingAccountField.Mortgage  <<"\"," <<std::endl;
    os <<"        \"ExchangeMargin\": \"" <<aSyncingTradingAccountField.ExchangeMargin  <<"\"," <<std::endl;
    os <<"        \"DeliveryMargin\": \"" <<aSyncingTradingAccountField.DeliveryMargin  <<"\"," <<std::endl;
    os <<"        \"ExchangeDeliveryMargin\": \"" <<aSyncingTradingAccountField.ExchangeDeliveryMargin  <<"\"," <<std::endl;
    os <<"        \"ReserveBalance\": \"" <<aSyncingTradingAccountField.ReserveBalance  <<"\"," <<std::endl;
    os <<"        \"OptionCloseProfit\": \"" <<aSyncingTradingAccountField.OptionCloseProfit  <<"\"," <<std::endl;
    os <<"        \"AccountLevel\": \"" <<aSyncingTradingAccountField.AccountLevel  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingInvestorPositionField const& aSyncingInvestorPositionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingInvestorPositionField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aSyncingInvestorPositionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aSyncingInvestorPositionField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingInvestorPositionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSyncingInvestorPositionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"PosiDirection\": \"" <<aSyncingInvestorPositionField.PosiDirection  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aSyncingInvestorPositionField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"PositionDate\": \"" <<aSyncingInvestorPositionField.PositionDate  <<"\"," <<std::endl;
    os <<"        \"YdPosition\": \"" <<aSyncingInvestorPositionField.YdPosition  <<"\"," <<std::endl;
    os <<"        \"Position\": \"" <<aSyncingInvestorPositionField.Position  <<"\"," <<std::endl;
    os <<"        \"LongFrozen\": \"" <<aSyncingInvestorPositionField.LongFrozen  <<"\"," <<std::endl;
    os <<"        \"ShortFrozen\": \"" <<aSyncingInvestorPositionField.ShortFrozen  <<"\"," <<std::endl;
    os <<"        \"LongFrozenAmount\": \"" <<aSyncingInvestorPositionField.LongFrozenAmount  <<"\"," <<std::endl;
    os <<"        \"ShortFrozenAmount\": \"" <<aSyncingInvestorPositionField.ShortFrozenAmount  <<"\"," <<std::endl;
    os <<"        \"OpenVolume\": \"" <<aSyncingInvestorPositionField.OpenVolume  <<"\"," <<std::endl;
    os <<"        \"CloseVolume\": \"" <<aSyncingInvestorPositionField.CloseVolume  <<"\"," <<std::endl;
    os <<"        \"OpenAmount\": \"" <<aSyncingInvestorPositionField.OpenAmount  <<"\"," <<std::endl;
    os <<"        \"CloseAmount\": \"" <<aSyncingInvestorPositionField.CloseAmount  <<"\"," <<std::endl;
    os <<"        \"YdCloseAmount\": \"" <<aSyncingInvestorPositionField.YdCloseAmount  <<"\"," <<std::endl;
    os <<"        \"YdCloseVolume\": \"" <<aSyncingInvestorPositionField.YdCloseVolume  <<"\"," <<std::endl;
    os <<"        \"PositionCost\": \"" <<aSyncingInvestorPositionField.PositionCost  <<"\"," <<std::endl;
    os <<"        \"PreMargin\": \"" <<aSyncingInvestorPositionField.PreMargin  <<"\"," <<std::endl;
    os <<"        \"UseMargin\": \"" <<aSyncingInvestorPositionField.UseMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aSyncingInvestorPositionField.FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"FrozenCash\": \"" <<aSyncingInvestorPositionField.FrozenCash  <<"\"," <<std::endl;
    os <<"        \"FrozenCommission\": \"" <<aSyncingInvestorPositionField.FrozenCommission  <<"\"," <<std::endl;
    os <<"        \"CashIn\": \"" <<aSyncingInvestorPositionField.CashIn  <<"\"," <<std::endl;
    os <<"        \"Commission\": \"" <<aSyncingInvestorPositionField.Commission  <<"\"," <<std::endl;
    os <<"        \"CloseProfit\": \"" <<aSyncingInvestorPositionField.CloseProfit  <<"\"," <<std::endl;
    os <<"        \"PositionProfit\": \"" <<aSyncingInvestorPositionField.PositionProfit  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aSyncingInvestorPositionField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aSyncingInvestorPositionField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aSyncingInvestorPositionField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aSyncingInvestorPositionField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"OpenCost\": \"" <<aSyncingInvestorPositionField.OpenCost  <<"\"," <<std::endl;
    os <<"        \"ExchangeMargin\": \"" <<aSyncingInvestorPositionField.ExchangeMargin  <<"\"," <<std::endl;
    os <<"        \"CombPosition\": \"" <<aSyncingInvestorPositionField.CombPosition  <<"\"," <<std::endl;
    os <<"        \"CombLongFrozen\": \"" <<aSyncingInvestorPositionField.CombLongFrozen  <<"\"," <<std::endl;
    os <<"        \"CombShortFrozen\": \"" <<aSyncingInvestorPositionField.CombShortFrozen  <<"\"," <<std::endl;
    os <<"        \"CloseProfitByDate\": \"" <<aSyncingInvestorPositionField.CloseProfitByDate  <<"\"," <<std::endl;
    os <<"        \"CloseProfitByTrade\": \"" <<aSyncingInvestorPositionField.CloseProfitByTrade  <<"\"," <<std::endl;
    os <<"        \"TodayPosition\": \"" <<aSyncingInvestorPositionField.TodayPosition  <<"\"," <<std::endl;
    os <<"        \"MarginRateByMoney\": \"" <<aSyncingInvestorPositionField.MarginRateByMoney  <<"\"," <<std::endl;
    os <<"        \"MarginRateByVolume\": \"" <<aSyncingInvestorPositionField.MarginRateByVolume  <<"\"," <<std::endl;
    os <<"        \"StrikeFrozen\": \"" <<aSyncingInvestorPositionField.StrikeFrozen  <<"\"," <<std::endl;
    os <<"        \"StrikeFrozenAmount\": \"" <<aSyncingInvestorPositionField.StrikeFrozenAmount  <<"\"," <<std::endl;
    os <<"        \"AbandonFrozen\": \"" <<aSyncingInvestorPositionField.AbandonFrozen  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingInstrumentMarginRateField const& aSyncingInstrumentMarginRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingInstrumentMarginRateField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aSyncingInstrumentMarginRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aSyncingInstrumentMarginRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aSyncingInstrumentMarginRateField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingInstrumentMarginRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSyncingInstrumentMarginRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aSyncingInstrumentMarginRateField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByMoney\": \"" <<aSyncingInstrumentMarginRateField.LongMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"LongMarginRatioByVolume\": \"" <<aSyncingInstrumentMarginRateField.LongMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByMoney\": \"" <<aSyncingInstrumentMarginRateField.ShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByVolume\": \"" <<aSyncingInstrumentMarginRateField.ShortMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"IsRelative\": \"" <<aSyncingInstrumentMarginRateField.IsRelative  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingInstrumentCommissionRateField const& aSyncingInstrumentCommissionRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingInstrumentCommissionRateField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aSyncingInstrumentCommissionRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aSyncingInstrumentCommissionRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aSyncingInstrumentCommissionRateField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingInstrumentCommissionRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSyncingInstrumentCommissionRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aSyncingInstrumentCommissionRateField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"OpenRatioByMoney\": \"" <<aSyncingInstrumentCommissionRateField.OpenRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"OpenRatioByVolume\": \"" <<aSyncingInstrumentCommissionRateField.OpenRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"CloseRatioByMoney\": \"" <<aSyncingInstrumentCommissionRateField.CloseRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"CloseRatioByVolume\": \"" <<aSyncingInstrumentCommissionRateField.CloseRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"CloseTodayRatioByMoney\": \"" <<aSyncingInstrumentCommissionRateField.CloseTodayRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"CloseTodayRatioByVolume\": \"" <<aSyncingInstrumentCommissionRateField.CloseTodayRatioByVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncingInstrumentTradingRightField const& aSyncingInstrumentTradingRightField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncingInstrumentTradingRightField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aSyncingInstrumentTradingRightField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aSyncingInstrumentTradingRightField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aSyncingInstrumentTradingRightField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aSyncingInstrumentTradingRightField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aSyncingInstrumentTradingRightField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"TradingRight\": \"" <<aSyncingInstrumentTradingRightField.TradingRight  <<"\"," <<std::endl;
    os <<"        \"QuoteTradingRight\": \"" <<aSyncingInstrumentTradingRightField.QuoteTradingRight  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryOrderField const& aQryOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aQryOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"InsertTimeStart\": \"" <<aQryOrderField.InsertTimeStart  <<"\"," <<std::endl;
    os <<"        \"InsertTimeEnd\": \"" <<aQryOrderField.InsertTimeEnd  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTradeField const& aQryTradeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTradeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryTradeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryTradeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryTradeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryTradeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TradeID\": \"" <<aQryTradeField.TradeID  <<"\"," <<std::endl;
    os <<"        \"TradeTimeStart\": \"" <<aQryTradeField.TradeTimeStart  <<"\"," <<std::endl;
    os <<"        \"TradeTimeEnd\": \"" <<aQryTradeField.TradeTimeEnd  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInvestorPositionField const& aQryInvestorPositionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInvestorPositionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorPositionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorPositionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInvestorPositionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInvestorPositionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTradingAccountField const& aQryTradingAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTradingAccountField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryTradingAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryTradingAccountField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInvestorField const& aQryInvestorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInvestorField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTradingCodeField const& aQryTradingCodeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTradingCodeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryTradingCodeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryTradingCodeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryTradingCodeField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aQryTradingCodeField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ClientIDType\": \"" <<aQryTradingCodeField.ClientIDType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInvestorGroupField const& aQryInvestorGroupField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInvestorGroupField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorGroupField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInstrumentMarginRateField const& aQryInstrumentMarginRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInstrumentMarginRateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInstrumentMarginRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInstrumentMarginRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInstrumentMarginRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInstrumentMarginRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aQryInstrumentMarginRateField.HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInstrumentCommissionRateField const& aQryInstrumentCommissionRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInstrumentCommissionRateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInstrumentCommissionRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInstrumentCommissionRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInstrumentCommissionRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInstrumentCommissionRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aQryInstrumentCommissionRateField.HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInstrumentTradingRightField const& aQryInstrumentTradingRightField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInstrumentTradingRightField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInstrumentTradingRightField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInstrumentTradingRightField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInstrumentTradingRightField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInstrumentTradingRightField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryBrokerField const& aQryBrokerField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryBrokerField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryBrokerField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTraderField const& aQryTraderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTraderField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryTraderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryTraderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQryTraderField.TraderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryPartBrokerField const& aQryPartBrokerField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryPartBrokerField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryPartBrokerField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryPartBrokerField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryPartBrokerField.ParticipantID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQrySuperUserFunctionField const& aQrySuperUserFunctionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQrySuperUserFunctionField\": {" <<std::endl;
    os <<"        \"UserID\": \"" <<aQrySuperUserFunctionField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryUserSessionField const& aQryUserSessionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryUserSessionField\": {" <<std::endl;
    os <<"        \"FrontID\": \"" <<aQryUserSessionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aQryUserSessionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryUserSessionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryUserSessionField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryFrontStatusField const& aQryFrontStatusField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryFrontStatusField\": {" <<std::endl;
    os <<"        \"FrontID\": \"" <<aQryFrontStatusField.FrontID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExchangeOrderField const& aQryExchangeOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExchangeOrderField\": {" <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryExchangeOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aQryExchangeOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aQryExchangeOrderField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExchangeOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQryExchangeOrderField.TraderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryOrderActionField const& aQryOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryOrderActionField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExchangeOrderActionField const& aQryExchangeOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExchangeOrderActionField\": {" <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryExchangeOrderActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aQryExchangeOrderActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExchangeOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQryExchangeOrderActionField.TraderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQrySuperUserField const& aQrySuperUserField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQrySuperUserField\": {" <<std::endl;
    os <<"        \"UserID\": \"" <<aQrySuperUserField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExchangeField const& aQryExchangeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExchangeField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExchangeField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryProductField const& aQryProductField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryProductField\": {" <<std::endl;
    os <<"        \"ProductID\": \"" <<aQryProductField.ProductID  <<"\"," <<std::endl;
    os <<"        \"ProductClass\": \"" <<aQryProductField.ProductClass  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInstrumentField const& aQryInstrumentField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInstrumentField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInstrumentField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInstrumentField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aQryInstrumentField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"ProductID\": \"" <<aQryInstrumentField.ProductID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryDepthMarketDataField const& aQryDepthMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryDepthMarketDataField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryDepthMarketDataField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryDepthMarketDataField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryBrokerUserField const& aQryBrokerUserField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryBrokerUserField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryBrokerUserField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryBrokerUserField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryBrokerUserFunctionField const& aQryBrokerUserFunctionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryBrokerUserFunctionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryBrokerUserFunctionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryBrokerUserFunctionField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTraderOfferField const& aQryTraderOfferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTraderOfferField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryTraderOfferField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryTraderOfferField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQryTraderOfferField.TraderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQrySyncDepositField const& aQrySyncDepositField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQrySyncDepositField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQrySyncDepositField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"DepositSeqNo\": \"" <<aQrySyncDepositField.DepositSeqNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQrySettlementInfoField const& aQrySettlementInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQrySettlementInfoField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQrySettlementInfoField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQrySettlementInfoField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aQrySettlementInfoField.TradingDay  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryHisOrderField const& aQryHisOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryHisOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryHisOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryHisOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryHisOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryHisOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aQryHisOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"InsertTimeStart\": \"" <<aQryHisOrderField.InsertTimeStart  <<"\"," <<std::endl;
    os <<"        \"InsertTimeEnd\": \"" <<aQryHisOrderField.InsertTimeEnd  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aQryHisOrderField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aQryHisOrderField.SettlementID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcOptionInstrMiniMarginField const& aOptionInstrMiniMarginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcOptionInstrMiniMarginField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOptionInstrMiniMarginField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aOptionInstrMiniMarginField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aOptionInstrMiniMarginField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOptionInstrMiniMarginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOptionInstrMiniMarginField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"MinMargin\": \"" <<aOptionInstrMiniMarginField.MinMargin  <<"\"," <<std::endl;
    os <<"        \"ValueMethod\": \"" <<aOptionInstrMiniMarginField.ValueMethod  <<"\"," <<std::endl;
    os <<"        \"IsRelative\": \"" <<aOptionInstrMiniMarginField.IsRelative  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerExchOptMarginAlgoField const& aBrokerExchOptMarginAlgoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerExchOptMarginAlgoField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerExchOptMarginAlgoField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aBrokerExchOptMarginAlgoField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"GuaranteeRatio\": \"" <<aBrokerExchOptMarginAlgoField.GuaranteeRatio  <<"\"," <<std::endl;
    os <<"        \"OutRatio\": \"" <<aBrokerExchOptMarginAlgoField.OutRatio  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcOptionInstrMarginAdjustField const& aOptionInstrMarginAdjustField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcOptionInstrMarginAdjustField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOptionInstrMarginAdjustField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aOptionInstrMarginAdjustField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aOptionInstrMarginAdjustField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOptionInstrMarginAdjustField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOptionInstrMarginAdjustField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aOptionInstrMarginAdjustField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByMoney\": \"" <<aOptionInstrMarginAdjustField.ShortMarginRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"ShortMarginRatioByVolume\": \"" <<aOptionInstrMarginAdjustField.ShortMarginRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"IsRelative\": \"" <<aOptionInstrMarginAdjustField.IsRelative  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcOptionInstrCommRateField const& aOptionInstrCommRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcOptionInstrCommRateField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOptionInstrCommRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aOptionInstrCommRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aOptionInstrCommRateField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOptionInstrCommRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOptionInstrCommRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aOptionInstrCommRateField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"OpenRatioByMoney\": \"" <<aOptionInstrCommRateField.OpenRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"OpenRatioByVolume\": \"" <<aOptionInstrCommRateField.OpenRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"CloseRatioByMoney\": \"" <<aOptionInstrCommRateField.CloseRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"CloseRatioByVolume\": \"" <<aOptionInstrCommRateField.CloseRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"CloseTodayRatioByMoney\": \"" <<aOptionInstrCommRateField.CloseTodayRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"CloseTodayRatioByVolume\": \"" <<aOptionInstrCommRateField.CloseTodayRatioByVolume  <<"\"," <<std::endl;
    os <<"        \"StrikeRatioByMoney\": \"" <<aOptionInstrCommRateField.StrikeRatioByMoney  <<"\"," <<std::endl;
    os <<"        \"StrikeRatioByVolume\": \"" <<aOptionInstrCommRateField.StrikeRatioByVolume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcOptionInstrTradeCostField const& aOptionInstrTradeCostField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcOptionInstrTradeCostField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOptionInstrTradeCostField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aOptionInstrTradeCostField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aOptionInstrTradeCostField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aOptionInstrTradeCostField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aOptionInstrTradeCostField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"Margin\": \"" <<aOptionInstrTradeCostField.Margin  <<"\"," <<std::endl;
    os <<"        \"Royalty\": \"" <<aOptionInstrTradeCostField.Royalty  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryOptionInstrTradeCostField const& aQryOptionInstrTradeCostField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryOptionInstrTradeCostField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryOptionInstrTradeCostField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryOptionInstrTradeCostField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryOptionInstrTradeCostField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryOptionInstrTradeCostField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aQryOptionInstrTradeCostField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"InputPrice\": \"" <<aQryOptionInstrTradeCostField.InputPrice  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryOptionInstrCommRateField const& aQryOptionInstrCommRateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryOptionInstrCommRateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryOptionInstrCommRateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryOptionInstrCommRateField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryOptionInstrCommRateField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryOptionInstrCommRateField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aQryOptionInstrCommRateField.HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcIndexPriceField const& aIndexPriceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcIndexPriceField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aIndexPriceField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aIndexPriceField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aIndexPriceField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aIndexPriceField.ClosePrice  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInputExecOrderField const& aInputExecOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInputExecOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputExecOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputExecOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputExecOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderRef\": \"" <<aInputExecOrderField.ExecOrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputExecOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aInputExecOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aInputExecOrderField.Volume  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aInputExecOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aInputExecOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aInputExecOrderField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInputExecOrderField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"ActionType\": \"" <<aInputExecOrderField.ActionType  <<"\"," <<std::endl;
    os <<"        \"PosiDirection\": \"" <<aInputExecOrderField.PosiDirection  <<"\"," <<std::endl;
    os <<"        \"ReservePositionFlag\": \"" <<aInputExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;
    os <<"        \"CloseFlag\": \"" <<aInputExecOrderField.CloseFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInputExecOrderActionField const& aInputExecOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInputExecOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputExecOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputExecOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderActionRef\": \"" <<aInputExecOrderActionField.ExecOrderActionRef  <<"\"," <<std::endl;
    os <<"        \"ExecOrderRef\": \"" <<aInputExecOrderActionField.ExecOrderRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aInputExecOrderActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aInputExecOrderActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aInputExecOrderActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInputExecOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderSysID\": \"" <<aInputExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aInputExecOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputExecOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputExecOrderActionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExecOrderField const& aExecOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExecOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExecOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExecOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aExecOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderRef\": \"" <<aExecOrderField.ExecOrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aExecOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aExecOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aExecOrderField.Volume  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aExecOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExecOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aExecOrderField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aExecOrderField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"ActionType\": \"" <<aExecOrderField.ActionType  <<"\"," <<std::endl;
    os <<"        \"PosiDirection\": \"" <<aExecOrderField.PosiDirection  <<"\"," <<std::endl;
    os <<"        \"ReservePositionFlag\": \"" <<aExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;
    os <<"        \"CloseFlag\": \"" <<aExecOrderField.CloseFlag  <<"\"," <<std::endl;
    os <<"        \"ExecOrderLocalID\": \"" <<aExecOrderField.ExecOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExecOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExecOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExecOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aExecOrderField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExecOrderField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExecOrderField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderSubmitStatus\": \"" <<aExecOrderField.OrderSubmitStatus  <<"\"," <<std::endl;
    os <<"        \"NotifySequence\": \"" <<aExecOrderField.NotifySequence  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aExecOrderField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aExecOrderField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderSysID\": \"" <<aExecOrderField.ExecOrderSysID  <<"\"," <<std::endl;
    os <<"        \"InsertDate\": \"" <<aExecOrderField.InsertDate  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aExecOrderField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aExecOrderField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"ExecResult\": \"" <<aExecOrderField.ExecResult  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aExecOrderField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aExecOrderField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aExecOrderField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aExecOrderField.SessionID  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aExecOrderField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aExecOrderField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"ActiveUserID\": \"" <<aExecOrderField.ActiveUserID  <<"\"," <<std::endl;
    os <<"        \"BrokerExecOrderSeq\": \"" <<aExecOrderField.BrokerExecOrderSeq  <<"\"," <<std::endl;
    os <<"        \"ClientIDType\": \"" <<aExecOrderField.ClientIDType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExecOrderActionField const& aExecOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExecOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExecOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExecOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderActionRef\": \"" <<aExecOrderActionField.ExecOrderActionRef  <<"\"," <<std::endl;
    os <<"        \"ExecOrderRef\": \"" <<aExecOrderActionField.ExecOrderRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aExecOrderActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aExecOrderActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aExecOrderActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExecOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderSysID\": \"" <<aExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aExecOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"ActionDate\": \"" <<aExecOrderActionField.ActionDate  <<"\"," <<std::endl;
    os <<"        \"ActionTime\": \"" <<aExecOrderActionField.ActionTime  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExecOrderActionField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExecOrderActionField.InstallID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderLocalID\": \"" <<aExecOrderActionField.ExecOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionLocalID\": \"" <<aExecOrderActionField.ActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExecOrderActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExecOrderActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExecOrderActionField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OrderActionStatus\": \"" <<aExecOrderActionField.OrderActionStatus  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aExecOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aExecOrderActionField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aExecOrderActionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExecOrderField const& aQryExecOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExecOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryExecOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryExecOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryExecOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExecOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderSysID\": \"" <<aQryExecOrderField.ExecOrderSysID  <<"\"," <<std::endl;
    os <<"        \"InsertTimeStart\": \"" <<aQryExecOrderField.InsertTimeStart  <<"\"," <<std::endl;
    os <<"        \"InsertTimeEnd\": \"" <<aQryExecOrderField.InsertTimeEnd  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeExecOrderField const& aExchangeExecOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeExecOrderField\": {" <<std::endl;
    os <<"        \"Volume\": \"" <<aExchangeExecOrderField.Volume  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aExchangeExecOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExchangeExecOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aExchangeExecOrderField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aExchangeExecOrderField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"ActionType\": \"" <<aExchangeExecOrderField.ActionType  <<"\"," <<std::endl;
    os <<"        \"PosiDirection\": \"" <<aExchangeExecOrderField.PosiDirection  <<"\"," <<std::endl;
    os <<"        \"ReservePositionFlag\": \"" <<aExchangeExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;
    os <<"        \"CloseFlag\": \"" <<aExchangeExecOrderField.CloseFlag  <<"\"," <<std::endl;
    os <<"        \"ExecOrderLocalID\": \"" <<aExchangeExecOrderField.ExecOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeExecOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchangeExecOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExchangeExecOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aExchangeExecOrderField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeExecOrderField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchangeExecOrderField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderSubmitStatus\": \"" <<aExchangeExecOrderField.OrderSubmitStatus  <<"\"," <<std::endl;
    os <<"        \"NotifySequence\": \"" <<aExchangeExecOrderField.NotifySequence  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aExchangeExecOrderField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aExchangeExecOrderField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderSysID\": \"" <<aExchangeExecOrderField.ExecOrderSysID  <<"\"," <<std::endl;
    os <<"        \"InsertDate\": \"" <<aExchangeExecOrderField.InsertDate  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aExchangeExecOrderField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aExchangeExecOrderField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"ExecResult\": \"" <<aExchangeExecOrderField.ExecResult  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aExchangeExecOrderField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aExchangeExecOrderField.SequenceNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExchangeExecOrderField const& aQryExchangeExecOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExchangeExecOrderField\": {" <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryExchangeExecOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aQryExchangeExecOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aQryExchangeExecOrderField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExchangeExecOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQryExchangeExecOrderField.TraderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExecOrderActionField const& aQryExecOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExecOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryExecOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryExecOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExecOrderActionField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeExecOrderActionField const& aExchangeExecOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeExecOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExchangeExecOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExchangeExecOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeExecOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderSysID\": \"" <<aExchangeExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aExchangeExecOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"ActionDate\": \"" <<aExchangeExecOrderActionField.ActionDate  <<"\"," <<std::endl;
    os <<"        \"ActionTime\": \"" <<aExchangeExecOrderActionField.ActionTime  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeExecOrderActionField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchangeExecOrderActionField.InstallID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderLocalID\": \"" <<aExchangeExecOrderActionField.ExecOrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionLocalID\": \"" <<aExchangeExecOrderActionField.ActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchangeExecOrderActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExchangeExecOrderActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExchangeExecOrderActionField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OrderActionStatus\": \"" <<aExchangeExecOrderActionField.OrderActionStatus  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aExchangeExecOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aExchangeExecOrderActionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExchangeExecOrderActionField const& aQryExchangeExecOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExchangeExecOrderActionField\": {" <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryExchangeExecOrderActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aQryExchangeExecOrderActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExchangeExecOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQryExchangeExecOrderActionField.TraderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcErrExecOrderField const& aErrExecOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcErrExecOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aErrExecOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aErrExecOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aErrExecOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderRef\": \"" <<aErrExecOrderField.ExecOrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aErrExecOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aErrExecOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aErrExecOrderField.Volume  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aErrExecOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aErrExecOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aErrExecOrderField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aErrExecOrderField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"ActionType\": \"" <<aErrExecOrderField.ActionType  <<"\"," <<std::endl;
    os <<"        \"PosiDirection\": \"" <<aErrExecOrderField.PosiDirection  <<"\"," <<std::endl;
    os <<"        \"ReservePositionFlag\": \"" <<aErrExecOrderField.ReservePositionFlag  <<"\"," <<std::endl;
    os <<"        \"CloseFlag\": \"" <<aErrExecOrderField.CloseFlag  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aErrExecOrderField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aErrExecOrderField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryErrExecOrderField const& aQryErrExecOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryErrExecOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryErrExecOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryErrExecOrderField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcErrExecOrderActionField const& aErrExecOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcErrExecOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aErrExecOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aErrExecOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderActionRef\": \"" <<aErrExecOrderActionField.ExecOrderActionRef  <<"\"," <<std::endl;
    os <<"        \"ExecOrderRef\": \"" <<aErrExecOrderActionField.ExecOrderRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aErrExecOrderActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aErrExecOrderActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aErrExecOrderActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aErrExecOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExecOrderSysID\": \"" <<aErrExecOrderActionField.ExecOrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aErrExecOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aErrExecOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aErrExecOrderActionField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aErrExecOrderActionField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aErrExecOrderActionField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryErrExecOrderActionField const& aQryErrExecOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryErrExecOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryErrExecOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryErrExecOrderActionField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInputQuoteField const& aInputQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInputQuoteField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aInputQuoteField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"BidVolumeTotalOriginal\": \"" <<aInputQuoteField.BidVolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"BidPrice\": \"" <<aInputQuoteField.BidPrice  <<"\"," <<std::endl;
    os <<"        \"BidCombOffsetFlag\": \"" <<aInputQuoteField.BidCombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"BidCombHedgeFlag\": \"" <<aInputQuoteField.BidCombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"AskVolumeTotalOriginal\": \"" <<aInputQuoteField.AskVolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"AskPrice\": \"" <<aInputQuoteField.AskPrice  <<"\"," <<std::endl;
    os <<"        \"AskCombOffsetFlag\": \"" <<aInputQuoteField.AskCombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"AskCombHedgeFlag\": \"" <<aInputQuoteField.AskCombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aInputQuoteField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInputQuoteField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInputQuoteActionField const& aInputQuoteActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInputQuoteActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputQuoteActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputQuoteActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"QuoteActionRef\": \"" <<aInputQuoteActionField.QuoteActionRef  <<"\"," <<std::endl;
    os <<"        \"QuoteRef\": \"" <<aInputQuoteActionField.QuoteRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aInputQuoteActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aInputQuoteActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aInputQuoteActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInputQuoteActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"QuoteSysID\": \"" <<aInputQuoteActionField.QuoteSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aInputQuoteActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputQuoteActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputQuoteActionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryQuoteField const& aQryQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryQuoteField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"QuoteSysID\": \"" <<aQryQuoteField.QuoteSysID  <<"\"," <<std::endl;
    os <<"        \"InsertTimeStart\": \"" <<aQryQuoteField.InsertTimeStart  <<"\"," <<std::endl;
    os <<"        \"InsertTimeEnd\": \"" <<aQryQuoteField.InsertTimeEnd  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQuoteField const& aQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQuoteField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aQuoteField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"BidVolumeTotalOriginal\": \"" <<aQuoteField.BidVolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"BidPrice\": \"" <<aQuoteField.BidPrice  <<"\"," <<std::endl;
    os <<"        \"BidCombOffsetFlag\": \"" <<aQuoteField.BidCombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"BidCombHedgeFlag\": \"" <<aQuoteField.BidCombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"AskVolumeTotalOriginal\": \"" <<aQuoteField.AskVolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"AskPrice\": \"" <<aQuoteField.AskPrice  <<"\"," <<std::endl;
    os <<"        \"AskCombOffsetFlag\": \"" <<aQuoteField.AskCombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"AskCombHedgeFlag\": \"" <<aQuoteField.AskCombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aQuoteField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aQuoteField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQuoteField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aQuoteField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aQuoteField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQuoteField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aQuoteField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderSubmitStatus\": \"" <<aQuoteField.OrderSubmitStatus  <<"\"," <<std::endl;
    os <<"        \"NotifySequence\": \"" <<aQuoteField.NotifySequence  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aQuoteField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aQuoteField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"QuoteSysID\": \"" <<aQuoteField.QuoteSysID  <<"\"," <<std::endl;
    os <<"        \"BidOrderSysID\": \"" <<aQuoteField.BidOrderSysID  <<"\"," <<std::endl;
    os <<"        \"AskOrderSysID\": \"" <<aQuoteField.AskOrderSysID  <<"\"," <<std::endl;
    os <<"        \"QuoteStatus\": \"" <<aQuoteField.QuoteStatus  <<"\"," <<std::endl;
    os <<"        \"BidVolumeTotal\": \"" <<aQuoteField.BidVolumeTotal  <<"\"," <<std::endl;
    os <<"        \"AskVolumeTotal\": \"" <<aQuoteField.AskVolumeTotal  <<"\"," <<std::endl;
    os <<"        \"BidVolumeTraded\": \"" <<aQuoteField.BidVolumeTraded  <<"\"," <<std::endl;
    os <<"        \"AskVolumeTraded\": \"" <<aQuoteField.AskVolumeTraded  <<"\"," <<std::endl;
    os <<"        \"InsertDate\": \"" <<aQuoteField.InsertDate  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aQuoteField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTime\": \"" <<aQuoteField.ActiveTime  <<"\"," <<std::endl;
    os <<"        \"SuspendTime\": \"" <<aQuoteField.SuspendTime  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aQuoteField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aQuoteField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTraderID\": \"" <<aQuoteField.ActiveTraderID  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aQuoteField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aQuoteField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aQuoteField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aQuoteField.SessionID  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aQuoteField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aQuoteField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"ActiveUserID\": \"" <<aQuoteField.ActiveUserID  <<"\"," <<std::endl;
    os <<"        \"BrokerOrderSeq\": \"" <<aQuoteField.BrokerOrderSeq  <<"\"," <<std::endl;
    os <<"        \"ClientIDType\": \"" <<aQuoteField.ClientIDType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInternalTransferField const& aInternalTransferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInternalTransferField\": {" <<std::endl;
    os <<"        \"DepositSeqNo\": \"" <<aInternalTransferField.DepositSeqNo  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInternalTransferField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInternalTransferField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InInvestorID\": \"" <<aInternalTransferField.InInvestorID  <<"\"," <<std::endl;
    os <<"        \"Deposit\": \"" <<aInternalTransferField.Deposit  <<"\"," <<std::endl;
    os <<"        \"IsForce\": \"" <<aInternalTransferField.IsForce  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQuoteActionField const& aQuoteActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQuoteActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQuoteActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQuoteActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"QuoteActionRef\": \"" <<aQuoteActionField.QuoteActionRef  <<"\"," <<std::endl;
    os <<"        \"QuoteRef\": \"" <<aQuoteActionField.QuoteRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aQuoteActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aQuoteActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aQuoteActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQuoteActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"QuoteSysID\": \"" <<aQuoteActionField.QuoteSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aQuoteActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"ActionDate\": \"" <<aQuoteActionField.ActionDate  <<"\"," <<std::endl;
    os <<"        \"ActionTime\": \"" <<aQuoteActionField.ActionTime  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQuoteActionField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aQuoteActionField.InstallID  <<"\"," <<std::endl;
    os <<"        \"QuoteLocalID\": \"" <<aQuoteActionField.QuoteLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionLocalID\": \"" <<aQuoteActionField.ActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQuoteActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aQuoteActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aQuoteActionField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OrderActionStatus\": \"" <<aQuoteActionField.OrderActionStatus  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQuoteActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aQuoteActionField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQuoteActionField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryQuoteActionField const& aQryQuoteActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryQuoteActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryQuoteActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryQuoteActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryQuoteActionField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorProductGroupMarginField const& aInvestorProductGroupMarginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorProductGroupMarginField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorProductGroupMarginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorProductGroupMarginField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInvestorProductGroupMarginField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ProductGroupID\": \"" <<aInvestorProductGroupMarginField.ProductGroupID  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aInvestorProductGroupMarginField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aInvestorProductGroupMarginField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aInvestorProductGroupMarginField.FrozenMargin  <<"\"," <<std::endl;
    os <<"        \"LongFrozenMargin\": \"" <<aInvestorProductGroupMarginField.LongFrozenMargin  <<"\"," <<std::endl;
    os <<"        \"ShortFrozenMargin\": \"" <<aInvestorProductGroupMarginField.ShortFrozenMargin  <<"\"," <<std::endl;
    os <<"        \"UseMargin\": \"" <<aInvestorProductGroupMarginField.UseMargin  <<"\"," <<std::endl;
    os <<"        \"LongUseMargin\": \"" <<aInvestorProductGroupMarginField.LongUseMargin  <<"\"," <<std::endl;
    os <<"        \"ShortUseMargin\": \"" <<aInvestorProductGroupMarginField.ShortUseMargin  <<"\"," <<std::endl;
    os <<"        \"ExchMargin\": \"" <<aInvestorProductGroupMarginField.ExchMargin  <<"\"," <<std::endl;
    os <<"        \"LongExchMargin\": \"" <<aInvestorProductGroupMarginField.LongExchMargin  <<"\"," <<std::endl;
    os <<"        \"ShortExchMargin\": \"" <<aInvestorProductGroupMarginField.ShortExchMargin  <<"\"," <<std::endl;
    os <<"        \"CloseProfit\": \"" <<aInvestorProductGroupMarginField.CloseProfit  <<"\"," <<std::endl;
    os <<"        \"FrozenCommission\": \"" <<aInvestorProductGroupMarginField.FrozenCommission  <<"\"," <<std::endl;
    os <<"        \"Commission\": \"" <<aInvestorProductGroupMarginField.Commission  <<"\"," <<std::endl;
    os <<"        \"FrozenCash\": \"" <<aInvestorProductGroupMarginField.FrozenCash  <<"\"," <<std::endl;
    os <<"        \"CashIn\": \"" <<aInvestorProductGroupMarginField.CashIn  <<"\"," <<std::endl;
    os <<"        \"PositionProfit\": \"" <<aInvestorProductGroupMarginField.PositionProfit  <<"\"," <<std::endl;
    os <<"        \"OffsetAmount\": \"" <<aInvestorProductGroupMarginField.OffsetAmount  <<"\"," <<std::endl;
    os <<"        \"LongOffsetAmount\": \"" <<aInvestorProductGroupMarginField.LongOffsetAmount  <<"\"," <<std::endl;
    os <<"        \"ShortOffsetAmount\": \"" <<aInvestorProductGroupMarginField.ShortOffsetAmount  <<"\"," <<std::endl;
    os <<"        \"ExchOffsetAmount\": \"" <<aInvestorProductGroupMarginField.ExchOffsetAmount  <<"\"," <<std::endl;
    os <<"        \"LongExchOffsetAmount\": \"" <<aInvestorProductGroupMarginField.LongExchOffsetAmount  <<"\"," <<std::endl;
    os <<"        \"ShortExchOffsetAmount\": \"" <<aInvestorProductGroupMarginField.ShortExchOffsetAmount  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInvestorProductGroupMarginField.HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInvestorProductGroupMarginField const& aQryInvestorProductGroupMarginField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInvestorProductGroupMarginField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorProductGroupMarginField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorProductGroupMarginField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ProductGroupID\": \"" <<aQryInvestorProductGroupMarginField.ProductGroupID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aQryInvestorProductGroupMarginField.HedgeFlag  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataField const& aMarketDataField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aMarketDataField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aMarketDataField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aMarketDataField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aMarketDataField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"LastPrice\": \"" <<aMarketDataField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aMarketDataField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aMarketDataField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aMarketDataField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aMarketDataField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aMarketDataField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aMarketDataField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aMarketDataField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aMarketDataField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aMarketDataField.OpenInterest  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aMarketDataField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aMarketDataField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aMarketDataField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aMarketDataField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aMarketDataField.PreDelta  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aMarketDataField.CurrDelta  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aMarketDataField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aMarketDataField.UpdateMillisec  <<"\"," <<std::endl;
    os <<"        \"ActionDay\": \"" <<aMarketDataField.ActionDay  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataBaseField const& aMarketDataBaseField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataBaseField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aMarketDataBaseField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PreSettlementPrice\": \"" <<aMarketDataBaseField.PreSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"PreClosePrice\": \"" <<aMarketDataBaseField.PreClosePrice  <<"\"," <<std::endl;
    os <<"        \"PreOpenInterest\": \"" <<aMarketDataBaseField.PreOpenInterest  <<"\"," <<std::endl;
    os <<"        \"PreDelta\": \"" <<aMarketDataBaseField.PreDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataStaticField const& aMarketDataStaticField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataStaticField\": {" <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aMarketDataStaticField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"HighestPrice\": \"" <<aMarketDataStaticField.HighestPrice  <<"\"," <<std::endl;
    os <<"        \"LowestPrice\": \"" <<aMarketDataStaticField.LowestPrice  <<"\"," <<std::endl;
    os <<"        \"ClosePrice\": \"" <<aMarketDataStaticField.ClosePrice  <<"\"," <<std::endl;
    os <<"        \"UpperLimitPrice\": \"" <<aMarketDataStaticField.UpperLimitPrice  <<"\"," <<std::endl;
    os <<"        \"LowerLimitPrice\": \"" <<aMarketDataStaticField.LowerLimitPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aMarketDataStaticField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CurrDelta\": \"" <<aMarketDataStaticField.CurrDelta  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataLastMatchField const& aMarketDataLastMatchField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataLastMatchField\": {" <<std::endl;
    os <<"        \"LastPrice\": \"" <<aMarketDataLastMatchField.LastPrice  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aMarketDataLastMatchField.Volume  <<"\"," <<std::endl;
    os <<"        \"Turnover\": \"" <<aMarketDataLastMatchField.Turnover  <<"\"," <<std::endl;
    os <<"        \"OpenInterest\": \"" <<aMarketDataLastMatchField.OpenInterest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataBestPriceField const& aMarketDataBestPriceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataBestPriceField\": {" <<std::endl;
    os <<"        \"BidPrice1\": \"" <<aMarketDataBestPriceField.BidPrice1  <<"\"," <<std::endl;
    os <<"        \"BidVolume1\": \"" <<aMarketDataBestPriceField.BidVolume1  <<"\"," <<std::endl;
    os <<"        \"AskPrice1\": \"" <<aMarketDataBestPriceField.AskPrice1  <<"\"," <<std::endl;
    os <<"        \"AskVolume1\": \"" <<aMarketDataBestPriceField.AskVolume1  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataBid23Field const& aMarketDataBid23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataBid23Field\": {" <<std::endl;
    os <<"        \"BidPrice2\": \"" <<aMarketDataBid23Field.BidPrice2  <<"\"," <<std::endl;
    os <<"        \"BidVolume2\": \"" <<aMarketDataBid23Field.BidVolume2  <<"\"," <<std::endl;
    os <<"        \"BidPrice3\": \"" <<aMarketDataBid23Field.BidPrice3  <<"\"," <<std::endl;
    os <<"        \"BidVolume3\": \"" <<aMarketDataBid23Field.BidVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataAsk23Field const& aMarketDataAsk23Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataAsk23Field\": {" <<std::endl;
    os <<"        \"AskPrice2\": \"" <<aMarketDataAsk23Field.AskPrice2  <<"\"," <<std::endl;
    os <<"        \"AskVolume2\": \"" <<aMarketDataAsk23Field.AskVolume2  <<"\"," <<std::endl;
    os <<"        \"AskPrice3\": \"" <<aMarketDataAsk23Field.AskPrice3  <<"\"," <<std::endl;
    os <<"        \"AskVolume3\": \"" <<aMarketDataAsk23Field.AskVolume3  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataBid45Field const& aMarketDataBid45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataBid45Field\": {" <<std::endl;
    os <<"        \"BidPrice4\": \"" <<aMarketDataBid45Field.BidPrice4  <<"\"," <<std::endl;
    os <<"        \"BidVolume4\": \"" <<aMarketDataBid45Field.BidVolume4  <<"\"," <<std::endl;
    os <<"        \"BidPrice5\": \"" <<aMarketDataBid45Field.BidPrice5  <<"\"," <<std::endl;
    os <<"        \"BidVolume5\": \"" <<aMarketDataBid45Field.BidVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataAsk45Field const& aMarketDataAsk45Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataAsk45Field\": {" <<std::endl;
    os <<"        \"AskPrice4\": \"" <<aMarketDataAsk45Field.AskPrice4  <<"\"," <<std::endl;
    os <<"        \"AskVolume4\": \"" <<aMarketDataAsk45Field.AskVolume4  <<"\"," <<std::endl;
    os <<"        \"AskPrice5\": \"" <<aMarketDataAsk45Field.AskPrice5  <<"\"," <<std::endl;
    os <<"        \"AskVolume5\": \"" <<aMarketDataAsk45Field.AskVolume5  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataUpdateTimeField const& aMarketDataUpdateTimeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataUpdateTimeField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aMarketDataUpdateTimeField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aMarketDataUpdateTimeField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"UpdateMillisec\": \"" <<aMarketDataUpdateTimeField.UpdateMillisec  <<"\"," <<std::endl;
    os <<"        \"ActionDay\": \"" <<aMarketDataUpdateTimeField.ActionDay  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataExchangeField const& aMarketDataExchangeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataExchangeField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aMarketDataExchangeField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSpecificInstrumentField const& aSpecificInstrumentField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSpecificInstrumentField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aSpecificInstrumentField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInstrumentStatusField const& aInstrumentStatusField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInstrumentStatusField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInstrumentStatusField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aInstrumentStatusField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"SettlementGroupID\": \"" <<aInstrumentStatusField.SettlementGroupID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInstrumentStatusField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"InstrumentStatus\": \"" <<aInstrumentStatusField.InstrumentStatus  <<"\"," <<std::endl;
    os <<"        \"TradingSegmentSN\": \"" <<aInstrumentStatusField.TradingSegmentSN  <<"\"," <<std::endl;
    os <<"        \"EnterTime\": \"" <<aInstrumentStatusField.EnterTime  <<"\"," <<std::endl;
    os <<"        \"EnterReason\": \"" <<aInstrumentStatusField.EnterReason  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInstrumentStatusField const& aQryInstrumentStatusField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInstrumentStatusField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInstrumentStatusField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aQryInstrumentStatusField.ExchangeInstID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorAccountField const& aInvestorAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorAccountField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorAccountField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aInvestorAccountField.AccountID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcPositionProfitAlgorithmField const& aPositionProfitAlgorithmField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcPositionProfitAlgorithmField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aPositionProfitAlgorithmField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aPositionProfitAlgorithmField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Algorithm\": \"" <<aPositionProfitAlgorithmField.Algorithm  <<"\"," <<std::endl;
    os <<"        \"Memo\": \"" <<aPositionProfitAlgorithmField.Memo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcDiscountField const& aDiscountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcDiscountField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aDiscountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aDiscountField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aDiscountField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"Discount\": \"" <<aDiscountField.Discount  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTransferBankField const& aQryTransferBankField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTransferBankField\": {" <<std::endl;
    os <<"        \"BankID\": \"" <<aQryTransferBankField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBrchID\": \"" <<aQryTransferBankField.BankBrchID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferBankField const& aTransferBankField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferBankField\": {" <<std::endl;
    os <<"        \"BankID\": \"" <<aTransferBankField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBrchID\": \"" <<aTransferBankField.BankBrchID  <<"\"," <<std::endl;
    os <<"        \"BankName\": \"" <<aTransferBankField.BankName  <<"\"," <<std::endl;
    os <<"        \"IsActive\": \"" <<aTransferBankField.IsActive  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInvestorPositionDetailField const& aQryInvestorPositionDetailField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInvestorPositionDetailField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorPositionDetailField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorPositionDetailField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInvestorPositionDetailField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryInvestorPositionDetailField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorPositionDetailField const& aInvestorPositionDetailField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorPositionDetailField\": {" <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInvestorPositionDetailField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorPositionDetailField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorPositionDetailField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInvestorPositionDetailField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aInvestorPositionDetailField.Direction  <<"\"," <<std::endl;
    os <<"        \"OpenDate\": \"" <<aInvestorPositionDetailField.OpenDate  <<"\"," <<std::endl;
    os <<"        \"TradeID\": \"" <<aInvestorPositionDetailField.TradeID  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aInvestorPositionDetailField.Volume  <<"\"," <<std::endl;
    os <<"        \"OpenPrice\": \"" <<aInvestorPositionDetailField.OpenPrice  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aInvestorPositionDetailField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aInvestorPositionDetailField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"TradeType\": \"" <<aInvestorPositionDetailField.TradeType  <<"\"," <<std::endl;
    os <<"        \"CombInstrumentID\": \"" <<aInvestorPositionDetailField.CombInstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInvestorPositionDetailField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"CloseProfitByDate\": \"" <<aInvestorPositionDetailField.CloseProfitByDate  <<"\"," <<std::endl;
    os <<"        \"CloseProfitByTrade\": \"" <<aInvestorPositionDetailField.CloseProfitByTrade  <<"\"," <<std::endl;
    os <<"        \"PositionProfitByDate\": \"" <<aInvestorPositionDetailField.PositionProfitByDate  <<"\"," <<std::endl;
    os <<"        \"PositionProfitByTrade\": \"" <<aInvestorPositionDetailField.PositionProfitByTrade  <<"\"," <<std::endl;
    os <<"        \"Margin\": \"" <<aInvestorPositionDetailField.Margin  <<"\"," <<std::endl;
    os <<"        \"ExchMargin\": \"" <<aInvestorPositionDetailField.ExchMargin  <<"\"," <<std::endl;
    os <<"        \"MarginRateByMoney\": \"" <<aInvestorPositionDetailField.MarginRateByMoney  <<"\"," <<std::endl;
    os <<"        \"MarginRateByVolume\": \"" <<aInvestorPositionDetailField.MarginRateByVolume  <<"\"," <<std::endl;
    os <<"        \"LastSettlementPrice\": \"" <<aInvestorPositionDetailField.LastSettlementPrice  <<"\"," <<std::endl;
    os <<"        \"SettlementPrice\": \"" <<aInvestorPositionDetailField.SettlementPrice  <<"\"," <<std::endl;
    os <<"        \"CloseVolume\": \"" <<aInvestorPositionDetailField.CloseVolume  <<"\"," <<std::endl;
    os <<"        \"CloseAmount\": \"" <<aInvestorPositionDetailField.CloseAmount  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradingAccountPasswordField const& aTradingAccountPasswordField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradingAccountPasswordField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradingAccountPasswordField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aTradingAccountPasswordField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aTradingAccountPasswordField.Password  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMDTraderOfferField const& aMDTraderOfferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMDTraderOfferField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aMDTraderOfferField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aMDTraderOfferField.TraderID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aMDTraderOfferField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aMDTraderOfferField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aMDTraderOfferField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aMDTraderOfferField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TraderConnectStatus\": \"" <<aMDTraderOfferField.TraderConnectStatus  <<"\"," <<std::endl;
    os <<"        \"ConnectRequestDate\": \"" <<aMDTraderOfferField.ConnectRequestDate  <<"\"," <<std::endl;
    os <<"        \"ConnectRequestTime\": \"" <<aMDTraderOfferField.ConnectRequestTime  <<"\"," <<std::endl;
    os <<"        \"LastReportDate\": \"" <<aMDTraderOfferField.LastReportDate  <<"\"," <<std::endl;
    os <<"        \"LastReportTime\": \"" <<aMDTraderOfferField.LastReportTime  <<"\"," <<std::endl;
    os <<"        \"ConnectDate\": \"" <<aMDTraderOfferField.ConnectDate  <<"\"," <<std::endl;
    os <<"        \"ConnectTime\": \"" <<aMDTraderOfferField.ConnectTime  <<"\"," <<std::endl;
    os <<"        \"StartDate\": \"" <<aMDTraderOfferField.StartDate  <<"\"," <<std::endl;
    os <<"        \"StartTime\": \"" <<aMDTraderOfferField.StartTime  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aMDTraderOfferField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMDTraderOfferField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"MaxTradeID\": \"" <<aMDTraderOfferField.MaxTradeID  <<"\"," <<std::endl;
    os <<"        \"MaxOrderMessageReference\": \"" <<aMDTraderOfferField.MaxOrderMessageReference  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryMDTraderOfferField const& aQryMDTraderOfferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryMDTraderOfferField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryMDTraderOfferField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aQryMDTraderOfferField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aQryMDTraderOfferField.TraderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryNoticeField const& aQryNoticeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryNoticeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryNoticeField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcNoticeField const& aNoticeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcNoticeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aNoticeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"Content\": \"" <<aNoticeField.Content  <<"\"," <<std::endl;
    os <<"        \"SequenceLabel\": \"" <<aNoticeField.SequenceLabel  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcUserRightField const& aUserRightField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcUserRightField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserRightField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserRightField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserRightType\": \"" <<aUserRightField.UserRightType  <<"\"," <<std::endl;
    os <<"        \"IsForbidden\": \"" <<aUserRightField.IsForbidden  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQrySettlementInfoConfirmField const& aQrySettlementInfoConfirmField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQrySettlementInfoConfirmField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQrySettlementInfoConfirmField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQrySettlementInfoConfirmField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcLoadSettlementInfoField const& aLoadSettlementInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcLoadSettlementInfoField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aLoadSettlementInfoField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerWithdrawAlgorithmField const& aBrokerWithdrawAlgorithmField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerWithdrawAlgorithmField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerWithdrawAlgorithmField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"WithdrawAlgorithm\": \"" <<aBrokerWithdrawAlgorithmField.WithdrawAlgorithm  <<"\"," <<std::endl;
    os <<"        \"UsingRatio\": \"" <<aBrokerWithdrawAlgorithmField.UsingRatio  <<"\"," <<std::endl;
    os <<"        \"IncludeCloseProfit\": \"" <<aBrokerWithdrawAlgorithmField.IncludeCloseProfit  <<"\"," <<std::endl;
    os <<"        \"AllWithoutTrade\": \"" <<aBrokerWithdrawAlgorithmField.AllWithoutTrade  <<"\"," <<std::endl;
    os <<"        \"AvailIncludeCloseProfit\": \"" <<aBrokerWithdrawAlgorithmField.AvailIncludeCloseProfit  <<"\"," <<std::endl;
    os <<"        \"IsBrokerUserEvent\": \"" <<aBrokerWithdrawAlgorithmField.IsBrokerUserEvent  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradingAccountPasswordUpdateV1Field const& aTradingAccountPasswordUpdateV1Field)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradingAccountPasswordUpdateV1Field\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradingAccountPasswordUpdateV1Field.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aTradingAccountPasswordUpdateV1Field.InvestorID  <<"\"," <<std::endl;
    os <<"        \"OldPassword\": \"" <<aTradingAccountPasswordUpdateV1Field.OldPassword  <<"\"," <<std::endl;
    os <<"        \"NewPassword\": \"" <<aTradingAccountPasswordUpdateV1Field.NewPassword  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradingAccountPasswordUpdateField const& aTradingAccountPasswordUpdateField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradingAccountPasswordUpdateField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradingAccountPasswordUpdateField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aTradingAccountPasswordUpdateField.AccountID  <<"\"," <<std::endl;
    os <<"        \"OldPassword\": \"" <<aTradingAccountPasswordUpdateField.OldPassword  <<"\"," <<std::endl;
    os <<"        \"NewPassword\": \"" <<aTradingAccountPasswordUpdateField.NewPassword  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryCombinationLegField const& aQryCombinationLegField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryCombinationLegField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryCombinationLegField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"CombInstrumentID\": \"" <<aQryCombinationLegField.CombInstrumentID  <<"\"," <<std::endl;
    os <<"        \"LegID\": \"" <<aQryCombinationLegField.LegID  <<"\"," <<std::endl;
    os <<"        \"LegInstrumentID\": \"" <<aQryCombinationLegField.LegInstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQrySyncStatusField const& aQrySyncStatusField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQrySyncStatusField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aQrySyncStatusField.TradingDay  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcCombinationLegField const& aCombinationLegField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcCombinationLegField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aCombinationLegField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"CombInstrumentID\": \"" <<aCombinationLegField.CombInstrumentID  <<"\"," <<std::endl;
    os <<"        \"LegID\": \"" <<aCombinationLegField.LegID  <<"\"," <<std::endl;
    os <<"        \"LegInstrumentID\": \"" <<aCombinationLegField.LegInstrumentID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aCombinationLegField.Direction  <<"\"," <<std::endl;
    os <<"        \"LegMultiple\": \"" <<aCombinationLegField.LegMultiple  <<"\"," <<std::endl;
    os <<"        \"ImplyLevel\": \"" <<aCombinationLegField.ImplyLevel  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcSyncStatusField const& aSyncStatusField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcSyncStatusField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aSyncStatusField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"DataSyncStatus\": \"" <<aSyncStatusField.DataSyncStatus  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryLinkManField const& aQryLinkManField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryLinkManField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryLinkManField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryLinkManField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcLinkManField const& aLinkManField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcLinkManField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aLinkManField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aLinkManField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"PersonType\": \"" <<aLinkManField.PersonType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardType\": \"" <<aLinkManField.IdentifiedCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aLinkManField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"PersonName\": \"" <<aLinkManField.PersonName  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aLinkManField.Telephone  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aLinkManField.Address  <<"\"," <<std::endl;
    os <<"        \"ZipCode\": \"" <<aLinkManField.ZipCode  <<"\"," <<std::endl;
    os <<"        \"Priority\": \"" <<aLinkManField.Priority  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryBrokerUserEventField const& aQryBrokerUserEventField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryBrokerUserEventField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryBrokerUserEventField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aQryBrokerUserEventField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserEventType\": \"" <<aQryBrokerUserEventField.UserEventType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerUserEventField const& aBrokerUserEventField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerUserEventField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerUserEventField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aBrokerUserEventField.UserID  <<"\"," <<std::endl;
    os <<"        \"UserEventType\": \"" <<aBrokerUserEventField.UserEventType  <<"\"," <<std::endl;
    os <<"        \"EventSequenceNo\": \"" <<aBrokerUserEventField.EventSequenceNo  <<"\"," <<std::endl;
    os <<"        \"EventDate\": \"" <<aBrokerUserEventField.EventDate  <<"\"," <<std::endl;
    os <<"        \"EventTime\": \"" <<aBrokerUserEventField.EventTime  <<"\"," <<std::endl;
    os <<"        \"UserEventInfo\": \"" <<aBrokerUserEventField.UserEventInfo  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aBrokerUserEventField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aBrokerUserEventField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aBrokerUserEventField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryContractBankField const& aQryContractBankField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryContractBankField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryContractBankField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aQryContractBankField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBrchID\": \"" <<aQryContractBankField.BankBrchID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcContractBankField const& aContractBankField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcContractBankField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aContractBankField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aContractBankField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBrchID\": \"" <<aContractBankField.BankBrchID  <<"\"," <<std::endl;
    os <<"        \"BankName\": \"" <<aContractBankField.BankName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorPositionCombineDetailField const& aInvestorPositionCombineDetailField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorPositionCombineDetailField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aInvestorPositionCombineDetailField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"OpenDate\": \"" <<aInvestorPositionCombineDetailField.OpenDate  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInvestorPositionCombineDetailField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aInvestorPositionCombineDetailField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorPositionCombineDetailField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorPositionCombineDetailField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ComTradeID\": \"" <<aInvestorPositionCombineDetailField.ComTradeID  <<"\"," <<std::endl;
    os <<"        \"TradeID\": \"" <<aInvestorPositionCombineDetailField.TradeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInvestorPositionCombineDetailField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aInvestorPositionCombineDetailField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aInvestorPositionCombineDetailField.Direction  <<"\"," <<std::endl;
    os <<"        \"TotalAmt\": \"" <<aInvestorPositionCombineDetailField.TotalAmt  <<"\"," <<std::endl;
    os <<"        \"Margin\": \"" <<aInvestorPositionCombineDetailField.Margin  <<"\"," <<std::endl;
    os <<"        \"ExchMargin\": \"" <<aInvestorPositionCombineDetailField.ExchMargin  <<"\"," <<std::endl;
    os <<"        \"MarginRateByMoney\": \"" <<aInvestorPositionCombineDetailField.MarginRateByMoney  <<"\"," <<std::endl;
    os <<"        \"MarginRateByVolume\": \"" <<aInvestorPositionCombineDetailField.MarginRateByVolume  <<"\"," <<std::endl;
    os <<"        \"LegID\": \"" <<aInvestorPositionCombineDetailField.LegID  <<"\"," <<std::endl;
    os <<"        \"LegMultiple\": \"" <<aInvestorPositionCombineDetailField.LegMultiple  <<"\"," <<std::endl;
    os <<"        \"CombInstrumentID\": \"" <<aInvestorPositionCombineDetailField.CombInstrumentID  <<"\"," <<std::endl;
    os <<"        \"TradeGroupID\": \"" <<aInvestorPositionCombineDetailField.TradeGroupID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcParkedOrderField const& aParkedOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcParkedOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aParkedOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aParkedOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aParkedOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aParkedOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aParkedOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aParkedOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aParkedOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"CombOffsetFlag\": \"" <<aParkedOrderField.CombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"CombHedgeFlag\": \"" <<aParkedOrderField.CombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aParkedOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeTotalOriginal\": \"" <<aParkedOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aParkedOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aParkedOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aParkedOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aParkedOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"ContingentCondition\": \"" <<aParkedOrderField.ContingentCondition  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aParkedOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aParkedOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aParkedOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aParkedOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aParkedOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"UserForceClose\": \"" <<aParkedOrderField.UserForceClose  <<"\"," <<std::endl;
    os <<"        \"IsSwapOrder\": \"" <<aParkedOrderField.IsSwapOrder  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aParkedOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParkedOrderID\": \"" <<aParkedOrderField.ParkedOrderID  <<"\"," <<std::endl;
    os <<"        \"UserType\": \"" <<aParkedOrderField.UserType  <<"\"," <<std::endl;
    os <<"        \"Status\": \"" <<aParkedOrderField.Status  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aParkedOrderField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aParkedOrderField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcParkedOrderActionField const& aParkedOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcParkedOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aParkedOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aParkedOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"OrderActionRef\": \"" <<aParkedOrderActionField.OrderActionRef  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aParkedOrderActionField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aParkedOrderActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aParkedOrderActionField.Direction  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aParkedOrderActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aParkedOrderActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aParkedOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aParkedOrderActionField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aParkedOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aParkedOrderActionField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeChange\": \"" <<aParkedOrderActionField.VolumeChange  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aParkedOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aParkedOrderActionField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ParkedOrderActionID\": \"" <<aParkedOrderActionField.ParkedOrderActionID  <<"\"," <<std::endl;
    os <<"        \"UserType\": \"" <<aParkedOrderActionField.UserType  <<"\"," <<std::endl;
    os <<"        \"Status\": \"" <<aParkedOrderActionField.Status  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aParkedOrderActionField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aParkedOrderActionField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryParkedOrderField const& aQryParkedOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryParkedOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryParkedOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryParkedOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryParkedOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryParkedOrderField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryParkedOrderActionField const& aQryParkedOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryParkedOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryParkedOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryParkedOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryParkedOrderActionField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryParkedOrderActionField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRemoveParkedOrderField const& aRemoveParkedOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRemoveParkedOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRemoveParkedOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRemoveParkedOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ParkedOrderID\": \"" <<aRemoveParkedOrderField.ParkedOrderID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRemoveParkedOrderActionField const& aRemoveParkedOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRemoveParkedOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRemoveParkedOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aRemoveParkedOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ParkedOrderActionID\": \"" <<aRemoveParkedOrderActionField.ParkedOrderActionID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInvestorWithdrawAlgorithmField const& aInvestorWithdrawAlgorithmField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInvestorWithdrawAlgorithmField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInvestorWithdrawAlgorithmField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aInvestorWithdrawAlgorithmField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInvestorWithdrawAlgorithmField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"UsingRatio\": \"" <<aInvestorWithdrawAlgorithmField.UsingRatio  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryInvestorPositionCombineDetailField const& aQryInvestorPositionCombineDetailField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryInvestorPositionCombineDetailField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryInvestorPositionCombineDetailField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryInvestorPositionCombineDetailField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryInvestorPositionCombineDetailField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"CombInstrumentID\": \"" <<aQryInvestorPositionCombineDetailField.CombInstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarketDataAveragePriceField const& aMarketDataAveragePriceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarketDataAveragePriceField\": {" <<std::endl;
    os <<"        \"AveragePrice\": \"" <<aMarketDataAveragePriceField.AveragePrice  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcVerifyInvestorPasswordField const& aVerifyInvestorPasswordField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcVerifyInvestorPasswordField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aVerifyInvestorPasswordField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aVerifyInvestorPasswordField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aVerifyInvestorPasswordField.Password  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcUserIPField const& aUserIPField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcUserIPField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserIPField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserIPField.UserID  <<"\"," <<std::endl;
    os <<"        \"IPAddress\": \"" <<aUserIPField.IPAddress  <<"\"," <<std::endl;
    os <<"        \"IPMask\": \"" <<aUserIPField.IPMask  <<"\"," <<std::endl;
    os <<"        \"MacAddress\": \"" <<aUserIPField.MacAddress  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradingNoticeInfoField const& aTradingNoticeInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradingNoticeInfoField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradingNoticeInfoField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aTradingNoticeInfoField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"SendTime\": \"" <<aTradingNoticeInfoField.SendTime  <<"\"," <<std::endl;
    os <<"        \"FieldContent\": \"" <<aTradingNoticeInfoField.FieldContent  <<"\"," <<std::endl;
    os <<"        \"SequenceSeries\": \"" <<aTradingNoticeInfoField.SequenceSeries  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aTradingNoticeInfoField.SequenceNo  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTradingNoticeField const& aTradingNoticeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTradingNoticeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTradingNoticeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorRange\": \"" <<aTradingNoticeField.InvestorRange  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aTradingNoticeField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"SequenceSeries\": \"" <<aTradingNoticeField.SequenceSeries  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aTradingNoticeField.UserID  <<"\"," <<std::endl;
    os <<"        \"SendTime\": \"" <<aTradingNoticeField.SendTime  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aTradingNoticeField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"FieldContent\": \"" <<aTradingNoticeField.FieldContent  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTradingNoticeField const& aQryTradingNoticeField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTradingNoticeField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryTradingNoticeField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryTradingNoticeField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryErrOrderField const& aQryErrOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryErrOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryErrOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryErrOrderField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcErrOrderField const& aErrOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcErrOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aErrOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aErrOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aErrOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aErrOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aErrOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aErrOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aErrOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"CombOffsetFlag\": \"" <<aErrOrderField.CombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"CombHedgeFlag\": \"" <<aErrOrderField.CombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aErrOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeTotalOriginal\": \"" <<aErrOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aErrOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aErrOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aErrOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aErrOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"ContingentCondition\": \"" <<aErrOrderField.ContingentCondition  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aErrOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aErrOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aErrOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aErrOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aErrOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"UserForceClose\": \"" <<aErrOrderField.UserForceClose  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aErrOrderField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aErrOrderField.ErrorMsg  <<"\"," <<std::endl;
    os <<"        \"IsSwapOrder\": \"" <<aErrOrderField.IsSwapOrder  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcErrorConditionalOrderField const& aErrorConditionalOrderField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcErrorConditionalOrderField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aErrorConditionalOrderField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aErrorConditionalOrderField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aErrorConditionalOrderField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aErrorConditionalOrderField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aErrorConditionalOrderField.UserID  <<"\"," <<std::endl;
    os <<"        \"OrderPriceType\": \"" <<aErrorConditionalOrderField.OrderPriceType  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aErrorConditionalOrderField.Direction  <<"\"," <<std::endl;
    os <<"        \"CombOffsetFlag\": \"" <<aErrorConditionalOrderField.CombOffsetFlag  <<"\"," <<std::endl;
    os <<"        \"CombHedgeFlag\": \"" <<aErrorConditionalOrderField.CombHedgeFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aErrorConditionalOrderField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeTotalOriginal\": \"" <<aErrorConditionalOrderField.VolumeTotalOriginal  <<"\"," <<std::endl;
    os <<"        \"TimeCondition\": \"" <<aErrorConditionalOrderField.TimeCondition  <<"\"," <<std::endl;
    os <<"        \"GTDDate\": \"" <<aErrorConditionalOrderField.GTDDate  <<"\"," <<std::endl;
    os <<"        \"VolumeCondition\": \"" <<aErrorConditionalOrderField.VolumeCondition  <<"\"," <<std::endl;
    os <<"        \"MinVolume\": \"" <<aErrorConditionalOrderField.MinVolume  <<"\"," <<std::endl;
    os <<"        \"ContingentCondition\": \"" <<aErrorConditionalOrderField.ContingentCondition  <<"\"," <<std::endl;
    os <<"        \"StopPrice\": \"" <<aErrorConditionalOrderField.StopPrice  <<"\"," <<std::endl;
    os <<"        \"ForceCloseReason\": \"" <<aErrorConditionalOrderField.ForceCloseReason  <<"\"," <<std::endl;
    os <<"        \"IsAutoSuspend\": \"" <<aErrorConditionalOrderField.IsAutoSuspend  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aErrorConditionalOrderField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aErrorConditionalOrderField.RequestID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aErrorConditionalOrderField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aErrorConditionalOrderField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aErrorConditionalOrderField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aErrorConditionalOrderField.ClientID  <<"\"," <<std::endl;
    os <<"        \"ExchangeInstID\": \"" <<aErrorConditionalOrderField.ExchangeInstID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aErrorConditionalOrderField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aErrorConditionalOrderField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderSubmitStatus\": \"" <<aErrorConditionalOrderField.OrderSubmitStatus  <<"\"," <<std::endl;
    os <<"        \"NotifySequence\": \"" <<aErrorConditionalOrderField.NotifySequence  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aErrorConditionalOrderField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"SettlementID\": \"" <<aErrorConditionalOrderField.SettlementID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aErrorConditionalOrderField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"OrderSource\": \"" <<aErrorConditionalOrderField.OrderSource  <<"\"," <<std::endl;
    os <<"        \"OrderStatus\": \"" <<aErrorConditionalOrderField.OrderStatus  <<"\"," <<std::endl;
    os <<"        \"OrderType\": \"" <<aErrorConditionalOrderField.OrderType  <<"\"," <<std::endl;
    os <<"        \"VolumeTraded\": \"" <<aErrorConditionalOrderField.VolumeTraded  <<"\"," <<std::endl;
    os <<"        \"VolumeTotal\": \"" <<aErrorConditionalOrderField.VolumeTotal  <<"\"," <<std::endl;
    os <<"        \"InsertDate\": \"" <<aErrorConditionalOrderField.InsertDate  <<"\"," <<std::endl;
    os <<"        \"InsertTime\": \"" <<aErrorConditionalOrderField.InsertTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTime\": \"" <<aErrorConditionalOrderField.ActiveTime  <<"\"," <<std::endl;
    os <<"        \"SuspendTime\": \"" <<aErrorConditionalOrderField.SuspendTime  <<"\"," <<std::endl;
    os <<"        \"UpdateTime\": \"" <<aErrorConditionalOrderField.UpdateTime  <<"\"," <<std::endl;
    os <<"        \"CancelTime\": \"" <<aErrorConditionalOrderField.CancelTime  <<"\"," <<std::endl;
    os <<"        \"ActiveTraderID\": \"" <<aErrorConditionalOrderField.ActiveTraderID  <<"\"," <<std::endl;
    os <<"        \"ClearingPartID\": \"" <<aErrorConditionalOrderField.ClearingPartID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aErrorConditionalOrderField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aErrorConditionalOrderField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aErrorConditionalOrderField.SessionID  <<"\"," <<std::endl;
    os <<"        \"UserProductInfo\": \"" <<aErrorConditionalOrderField.UserProductInfo  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aErrorConditionalOrderField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"UserForceClose\": \"" <<aErrorConditionalOrderField.UserForceClose  <<"\"," <<std::endl;
    os <<"        \"ActiveUserID\": \"" <<aErrorConditionalOrderField.ActiveUserID  <<"\"," <<std::endl;
    os <<"        \"BrokerOrderSeq\": \"" <<aErrorConditionalOrderField.BrokerOrderSeq  <<"\"," <<std::endl;
    os <<"        \"RelativeOrderSysID\": \"" <<aErrorConditionalOrderField.RelativeOrderSysID  <<"\"," <<std::endl;
    os <<"        \"ZCETotalTradedVolume\": \"" <<aErrorConditionalOrderField.ZCETotalTradedVolume  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aErrorConditionalOrderField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aErrorConditionalOrderField.ErrorMsg  <<"\"," <<std::endl;
    os <<"        \"IsSwapOrder\": \"" <<aErrorConditionalOrderField.IsSwapOrder  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryErrOrderActionField const& aQryErrOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryErrOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryErrOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryErrOrderActionField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcErrOrderActionField const& aErrOrderActionField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcErrOrderActionField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aErrOrderActionField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aErrOrderActionField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"OrderActionRef\": \"" <<aErrOrderActionField.OrderActionRef  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aErrOrderActionField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aErrOrderActionField.RequestID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aErrOrderActionField.Direction  <<"\"," <<std::endl;
    os <<"        \"FrontID\": \"" <<aErrOrderActionField.FrontID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aErrOrderActionField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aErrOrderActionField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"OrderSysID\": \"" <<aErrOrderActionField.OrderSysID  <<"\"," <<std::endl;
    os <<"        \"ActionFlag\": \"" <<aErrOrderActionField.ActionFlag  <<"\"," <<std::endl;
    os <<"        \"LimitPrice\": \"" <<aErrOrderActionField.LimitPrice  <<"\"," <<std::endl;
    os <<"        \"VolumeChange\": \"" <<aErrOrderActionField.VolumeChange  <<"\"," <<std::endl;
    os <<"        \"ActionDate\": \"" <<aErrOrderActionField.ActionDate  <<"\"," <<std::endl;
    os <<"        \"ActionTime\": \"" <<aErrOrderActionField.ActionTime  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aErrOrderActionField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aErrOrderActionField.InstallID  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aErrOrderActionField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"ActionLocalID\": \"" <<aErrOrderActionField.ActionLocalID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aErrOrderActionField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aErrOrderActionField.ClientID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aErrOrderActionField.BusinessUnit  <<"\"," <<std::endl;
    os <<"        \"OrderActionStatus\": \"" <<aErrOrderActionField.OrderActionStatus  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aErrOrderActionField.UserID  <<"\"," <<std::endl;
    os <<"        \"StatusMsg\": \"" <<aErrOrderActionField.StatusMsg  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aErrOrderActionField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aErrOrderActionField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aErrOrderActionField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryExchangeSequenceField const& aQryExchangeSequenceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryExchangeSequenceField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryExchangeSequenceField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeSequenceField const& aExchangeSequenceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeSequenceField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeSequenceField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"SequenceNo\": \"" <<aExchangeSequenceField.SequenceNo  <<"\"," <<std::endl;
    os <<"        \"MarketStatus\": \"" <<aExchangeSequenceField.MarketStatus  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQueryMaxOrderVolumeWithPriceField const& aQueryMaxOrderVolumeWithPriceField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQueryMaxOrderVolumeWithPriceField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQueryMaxOrderVolumeWithPriceField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQueryMaxOrderVolumeWithPriceField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQueryMaxOrderVolumeWithPriceField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQueryMaxOrderVolumeWithPriceField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aQueryMaxOrderVolumeWithPriceField.Direction  <<"\"," <<std::endl;
    os <<"        \"OffsetFlag\": \"" <<aQueryMaxOrderVolumeWithPriceField.OffsetFlag  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aQueryMaxOrderVolumeWithPriceField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"MaxVolume\": \"" <<aQueryMaxOrderVolumeWithPriceField.MaxVolume  <<"\"," <<std::endl;
    os <<"        \"Price\": \"" <<aQueryMaxOrderVolumeWithPriceField.Price  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryBrokerTradingParamsField const& aQryBrokerTradingParamsField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryBrokerTradingParamsField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryBrokerTradingParamsField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryBrokerTradingParamsField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerTradingParamsField const& aBrokerTradingParamsField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerTradingParamsField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerTradingParamsField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aBrokerTradingParamsField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"MarginPriceType\": \"" <<aBrokerTradingParamsField.MarginPriceType  <<"\"," <<std::endl;
    os <<"        \"Algorithm\": \"" <<aBrokerTradingParamsField.Algorithm  <<"\"," <<std::endl;
    os <<"        \"AvailIncludeCloseProfit\": \"" <<aBrokerTradingParamsField.AvailIncludeCloseProfit  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryBrokerTradingAlgosField const& aQryBrokerTradingAlgosField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryBrokerTradingAlgosField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryBrokerTradingAlgosField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryBrokerTradingAlgosField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryBrokerTradingAlgosField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerTradingAlgosField const& aBrokerTradingAlgosField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerTradingAlgosField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerTradingAlgosField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aBrokerTradingAlgosField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aBrokerTradingAlgosField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"HandlePositionAlgoID\": \"" <<aBrokerTradingAlgosField.HandlePositionAlgoID  <<"\"," <<std::endl;
    os <<"        \"FindMarginRateAlgoID\": \"" <<aBrokerTradingAlgosField.FindMarginRateAlgoID  <<"\"," <<std::endl;
    os <<"        \"HandleTradingAccountAlgoID\": \"" <<aBrokerTradingAlgosField.HandleTradingAccountAlgoID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQueryBrokerDepositField const& aQueryBrokerDepositField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQueryBrokerDepositField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQueryBrokerDepositField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQueryBrokerDepositField.ExchangeID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerDepositField const& aBrokerDepositField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerDepositField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aBrokerDepositField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerDepositField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aBrokerDepositField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aBrokerDepositField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"PreBalance\": \"" <<aBrokerDepositField.PreBalance  <<"\"," <<std::endl;
    os <<"        \"CurrMargin\": \"" <<aBrokerDepositField.CurrMargin  <<"\"," <<std::endl;
    os <<"        \"CloseProfit\": \"" <<aBrokerDepositField.CloseProfit  <<"\"," <<std::endl;
    os <<"        \"Balance\": \"" <<aBrokerDepositField.Balance  <<"\"," <<std::endl;
    os <<"        \"Deposit\": \"" <<aBrokerDepositField.Deposit  <<"\"," <<std::endl;
    os <<"        \"Withdraw\": \"" <<aBrokerDepositField.Withdraw  <<"\"," <<std::endl;
    os <<"        \"Available\": \"" <<aBrokerDepositField.Available  <<"\"," <<std::endl;
    os <<"        \"Reserve\": \"" <<aBrokerDepositField.Reserve  <<"\"," <<std::endl;
    os <<"        \"FrozenMargin\": \"" <<aBrokerDepositField.FrozenMargin  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryCFMMCBrokerKeyField const& aQryCFMMCBrokerKeyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryCFMMCBrokerKeyField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryCFMMCBrokerKeyField.BrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcCFMMCBrokerKeyField const& aCFMMCBrokerKeyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcCFMMCBrokerKeyField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aCFMMCBrokerKeyField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aCFMMCBrokerKeyField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"CreateDate\": \"" <<aCFMMCBrokerKeyField.CreateDate  <<"\"," <<std::endl;
    os <<"        \"CreateTime\": \"" <<aCFMMCBrokerKeyField.CreateTime  <<"\"," <<std::endl;
    os <<"        \"KeyID\": \"" <<aCFMMCBrokerKeyField.KeyID  <<"\"," <<std::endl;
    os <<"        \"CurrentKey\": \"" <<aCFMMCBrokerKeyField.CurrentKey  <<"\"," <<std::endl;
    os <<"        \"KeyKind\": \"" <<aCFMMCBrokerKeyField.KeyKind  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcCFMMCTradingAccountKeyField const& aCFMMCTradingAccountKeyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcCFMMCTradingAccountKeyField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aCFMMCTradingAccountKeyField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aCFMMCTradingAccountKeyField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aCFMMCTradingAccountKeyField.AccountID  <<"\"," <<std::endl;
    os <<"        \"KeyID\": \"" <<aCFMMCTradingAccountKeyField.KeyID  <<"\"," <<std::endl;
    os <<"        \"CurrentKey\": \"" <<aCFMMCTradingAccountKeyField.CurrentKey  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryCFMMCTradingAccountKeyField const& aQryCFMMCTradingAccountKeyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryCFMMCTradingAccountKeyField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryCFMMCTradingAccountKeyField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryCFMMCTradingAccountKeyField.InvestorID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerUserOTPParamField const& aBrokerUserOTPParamField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerUserOTPParamField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerUserOTPParamField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aBrokerUserOTPParamField.UserID  <<"\"," <<std::endl;
    os <<"        \"OTPVendorsID\": \"" <<aBrokerUserOTPParamField.OTPVendorsID  <<"\"," <<std::endl;
    os <<"        \"SerialNumber\": \"" <<aBrokerUserOTPParamField.SerialNumber  <<"\"," <<std::endl;
    os <<"        \"AuthKey\": \"" <<aBrokerUserOTPParamField.AuthKey  <<"\"," <<std::endl;
    os <<"        \"LastDrift\": \"" <<aBrokerUserOTPParamField.LastDrift  <<"\"," <<std::endl;
    os <<"        \"LastSuccess\": \"" <<aBrokerUserOTPParamField.LastSuccess  <<"\"," <<std::endl;
    os <<"        \"OTPType\": \"" <<aBrokerUserOTPParamField.OTPType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcManualSyncBrokerUserOTPField const& aManualSyncBrokerUserOTPField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcManualSyncBrokerUserOTPField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aManualSyncBrokerUserOTPField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aManualSyncBrokerUserOTPField.UserID  <<"\"," <<std::endl;
    os <<"        \"OTPType\": \"" <<aManualSyncBrokerUserOTPField.OTPType  <<"\"," <<std::endl;
    os <<"        \"FirstOTP\": \"" <<aManualSyncBrokerUserOTPField.FirstOTP  <<"\"," <<std::endl;
    os <<"        \"SecondOTP\": \"" <<aManualSyncBrokerUserOTPField.SecondOTP  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcCommRateModelField const& aCommRateModelField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcCommRateModelField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aCommRateModelField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"CommModelID\": \"" <<aCommRateModelField.CommModelID  <<"\"," <<std::endl;
    os <<"        \"CommModelName\": \"" <<aCommRateModelField.CommModelName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryCommRateModelField const& aQryCommRateModelField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryCommRateModelField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryCommRateModelField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"CommModelID\": \"" <<aQryCommRateModelField.CommModelID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMarginModelField const& aMarginModelField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMarginModelField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aMarginModelField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"MarginModelID\": \"" <<aMarginModelField.MarginModelID  <<"\"," <<std::endl;
    os <<"        \"MarginModelName\": \"" <<aMarginModelField.MarginModelName  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcEWarrantOffsetField const& aEWarrantOffsetField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcEWarrantOffsetField\": {" <<std::endl;
    os <<"        \"TradingDay\": \"" <<aEWarrantOffsetField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aEWarrantOffsetField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aEWarrantOffsetField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aEWarrantOffsetField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aEWarrantOffsetField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"Direction\": \"" <<aEWarrantOffsetField.Direction  <<"\"," <<std::endl;
    os <<"        \"HedgeFlag\": \"" <<aEWarrantOffsetField.HedgeFlag  <<"\"," <<std::endl;
    os <<"        \"Volume\": \"" <<aEWarrantOffsetField.Volume  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryEWarrantOffsetField const& aQryEWarrantOffsetField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryEWarrantOffsetField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryEWarrantOffsetField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aQryEWarrantOffsetField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aQryEWarrantOffsetField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aQryEWarrantOffsetField.InstrumentID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqOpenAccountField const& aReqOpenAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqOpenAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqOpenAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqOpenAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqOpenAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqOpenAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqOpenAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqOpenAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqOpenAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqOpenAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqOpenAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqOpenAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqOpenAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqOpenAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aReqOpenAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aReqOpenAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aReqOpenAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"Gender\": \"" <<aReqOpenAccountField.Gender  <<"\"," <<std::endl;
    os <<"        \"CountryCode\": \"" <<aReqOpenAccountField.CountryCode  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aReqOpenAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aReqOpenAccountField.Address  <<"\"," <<std::endl;
    os <<"        \"ZipCode\": \"" <<aReqOpenAccountField.ZipCode  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aReqOpenAccountField.Telephone  <<"\"," <<std::endl;
    os <<"        \"MobilePhone\": \"" <<aReqOpenAccountField.MobilePhone  <<"\"," <<std::endl;
    os <<"        \"Fax\": \"" <<aReqOpenAccountField.Fax  <<"\"," <<std::endl;
    os <<"        \"EMail\": \"" <<aReqOpenAccountField.EMail  <<"\"," <<std::endl;
    os <<"        \"MoneyAccountStatus\": \"" <<aReqOpenAccountField.MoneyAccountStatus  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aReqOpenAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aReqOpenAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aReqOpenAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqOpenAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqOpenAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aReqOpenAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqOpenAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"CashExchangeCode\": \"" <<aReqOpenAccountField.CashExchangeCode  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqOpenAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aReqOpenAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aReqOpenAccountField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aReqOpenAccountField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqOpenAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aReqOpenAccountField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aReqOpenAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aReqOpenAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aReqOpenAccountField.OperNo  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqOpenAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqOpenAccountField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqCancelAccountField const& aReqCancelAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqCancelAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqCancelAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqCancelAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqCancelAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqCancelAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqCancelAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqCancelAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqCancelAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqCancelAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqCancelAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqCancelAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqCancelAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqCancelAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aReqCancelAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aReqCancelAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aReqCancelAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"Gender\": \"" <<aReqCancelAccountField.Gender  <<"\"," <<std::endl;
    os <<"        \"CountryCode\": \"" <<aReqCancelAccountField.CountryCode  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aReqCancelAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aReqCancelAccountField.Address  <<"\"," <<std::endl;
    os <<"        \"ZipCode\": \"" <<aReqCancelAccountField.ZipCode  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aReqCancelAccountField.Telephone  <<"\"," <<std::endl;
    os <<"        \"MobilePhone\": \"" <<aReqCancelAccountField.MobilePhone  <<"\"," <<std::endl;
    os <<"        \"Fax\": \"" <<aReqCancelAccountField.Fax  <<"\"," <<std::endl;
    os <<"        \"EMail\": \"" <<aReqCancelAccountField.EMail  <<"\"," <<std::endl;
    os <<"        \"MoneyAccountStatus\": \"" <<aReqCancelAccountField.MoneyAccountStatus  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aReqCancelAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aReqCancelAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aReqCancelAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqCancelAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqCancelAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aReqCancelAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqCancelAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"CashExchangeCode\": \"" <<aReqCancelAccountField.CashExchangeCode  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqCancelAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aReqCancelAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aReqCancelAccountField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aReqCancelAccountField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqCancelAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aReqCancelAccountField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aReqCancelAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aReqCancelAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aReqCancelAccountField.OperNo  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqCancelAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqCancelAccountField.UserID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqChangeAccountField const& aReqChangeAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqChangeAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqChangeAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqChangeAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqChangeAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqChangeAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqChangeAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqChangeAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqChangeAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqChangeAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqChangeAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqChangeAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqChangeAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqChangeAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aReqChangeAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aReqChangeAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aReqChangeAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"Gender\": \"" <<aReqChangeAccountField.Gender  <<"\"," <<std::endl;
    os <<"        \"CountryCode\": \"" <<aReqChangeAccountField.CountryCode  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aReqChangeAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aReqChangeAccountField.Address  <<"\"," <<std::endl;
    os <<"        \"ZipCode\": \"" <<aReqChangeAccountField.ZipCode  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aReqChangeAccountField.Telephone  <<"\"," <<std::endl;
    os <<"        \"MobilePhone\": \"" <<aReqChangeAccountField.MobilePhone  <<"\"," <<std::endl;
    os <<"        \"Fax\": \"" <<aReqChangeAccountField.Fax  <<"\"," <<std::endl;
    os <<"        \"EMail\": \"" <<aReqChangeAccountField.EMail  <<"\"," <<std::endl;
    os <<"        \"MoneyAccountStatus\": \"" <<aReqChangeAccountField.MoneyAccountStatus  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aReqChangeAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aReqChangeAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"NewBankAccount\": \"" <<aReqChangeAccountField.NewBankAccount  <<"\"," <<std::endl;
    os <<"        \"NewBankPassWord\": \"" <<aReqChangeAccountField.NewBankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aReqChangeAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqChangeAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aReqChangeAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqChangeAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aReqChangeAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqChangeAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqChangeAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aReqChangeAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aReqChangeAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqChangeAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqChangeAccountField.Digest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqTransferField const& aReqTransferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqTransferField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqTransferField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqTransferField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqTransferField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqTransferField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqTransferField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqTransferField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqTransferField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqTransferField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqTransferField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqTransferField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqTransferField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqTransferField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aReqTransferField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aReqTransferField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aReqTransferField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aReqTransferField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aReqTransferField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aReqTransferField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aReqTransferField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqTransferField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqTransferField.InstallID  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aReqTransferField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqTransferField.UserID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aReqTransferField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqTransferField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"TradeAmount\": \"" <<aReqTransferField.TradeAmount  <<"\"," <<std::endl;
    os <<"        \"FutureFetchAmount\": \"" <<aReqTransferField.FutureFetchAmount  <<"\"," <<std::endl;
    os <<"        \"FeePayFlag\": \"" <<aReqTransferField.FeePayFlag  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aReqTransferField.CustFee  <<"\"," <<std::endl;
    os <<"        \"BrokerFee\": \"" <<aReqTransferField.BrokerFee  <<"\"," <<std::endl;
    os <<"        \"Message\": \"" <<aReqTransferField.Message  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqTransferField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aReqTransferField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aReqTransferField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aReqTransferField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqTransferField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aReqTransferField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aReqTransferField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aReqTransferField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aReqTransferField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aReqTransferField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqTransferField.TID  <<"\"," <<std::endl;
    os <<"        \"TransferStatus\": \"" <<aReqTransferField.TransferStatus  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspTransferField const& aRspTransferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspTransferField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aRspTransferField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aRspTransferField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aRspTransferField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspTransferField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aRspTransferField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aRspTransferField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRspTransferField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aRspTransferField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspTransferField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aRspTransferField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aRspTransferField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspTransferField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aRspTransferField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aRspTransferField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aRspTransferField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aRspTransferField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aRspTransferField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aRspTransferField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aRspTransferField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aRspTransferField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aRspTransferField.InstallID  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aRspTransferField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspTransferField.UserID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aRspTransferField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aRspTransferField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"TradeAmount\": \"" <<aRspTransferField.TradeAmount  <<"\"," <<std::endl;
    os <<"        \"FutureFetchAmount\": \"" <<aRspTransferField.FutureFetchAmount  <<"\"," <<std::endl;
    os <<"        \"FeePayFlag\": \"" <<aRspTransferField.FeePayFlag  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aRspTransferField.CustFee  <<"\"," <<std::endl;
    os <<"        \"BrokerFee\": \"" <<aRspTransferField.BrokerFee  <<"\"," <<std::endl;
    os <<"        \"Message\": \"" <<aRspTransferField.Message  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aRspTransferField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aRspTransferField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aRspTransferField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aRspTransferField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aRspTransferField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aRspTransferField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aRspTransferField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aRspTransferField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aRspTransferField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aRspTransferField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aRspTransferField.TID  <<"\"," <<std::endl;
    os <<"        \"TransferStatus\": \"" <<aRspTransferField.TransferStatus  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspTransferField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspTransferField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqRepealField const& aReqRepealField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqRepealField\": {" <<std::endl;
    os <<"        \"RepealTimeInterval\": \"" <<aReqRepealField.RepealTimeInterval  <<"\"," <<std::endl;
    os <<"        \"RepealedTimes\": \"" <<aReqRepealField.RepealedTimes  <<"\"," <<std::endl;
    os <<"        \"BankRepealFlag\": \"" <<aReqRepealField.BankRepealFlag  <<"\"," <<std::endl;
    os <<"        \"BrokerRepealFlag\": \"" <<aReqRepealField.BrokerRepealFlag  <<"\"," <<std::endl;
    os <<"        \"PlateRepealSerial\": \"" <<aReqRepealField.PlateRepealSerial  <<"\"," <<std::endl;
    os <<"        \"BankRepealSerial\": \"" <<aReqRepealField.BankRepealSerial  <<"\"," <<std::endl;
    os <<"        \"FutureRepealSerial\": \"" <<aReqRepealField.FutureRepealSerial  <<"\"," <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqRepealField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqRepealField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqRepealField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqRepealField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqRepealField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqRepealField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqRepealField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqRepealField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqRepealField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqRepealField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqRepealField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqRepealField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aReqRepealField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aReqRepealField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aReqRepealField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aReqRepealField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aReqRepealField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aReqRepealField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aReqRepealField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqRepealField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqRepealField.InstallID  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aReqRepealField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqRepealField.UserID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aReqRepealField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqRepealField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"TradeAmount\": \"" <<aReqRepealField.TradeAmount  <<"\"," <<std::endl;
    os <<"        \"FutureFetchAmount\": \"" <<aReqRepealField.FutureFetchAmount  <<"\"," <<std::endl;
    os <<"        \"FeePayFlag\": \"" <<aReqRepealField.FeePayFlag  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aReqRepealField.CustFee  <<"\"," <<std::endl;
    os <<"        \"BrokerFee\": \"" <<aReqRepealField.BrokerFee  <<"\"," <<std::endl;
    os <<"        \"Message\": \"" <<aReqRepealField.Message  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqRepealField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aReqRepealField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aReqRepealField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aReqRepealField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqRepealField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aReqRepealField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aReqRepealField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aReqRepealField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aReqRepealField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aReqRepealField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqRepealField.TID  <<"\"," <<std::endl;
    os <<"        \"TransferStatus\": \"" <<aReqRepealField.TransferStatus  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspRepealField const& aRspRepealField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspRepealField\": {" <<std::endl;
    os <<"        \"RepealTimeInterval\": \"" <<aRspRepealField.RepealTimeInterval  <<"\"," <<std::endl;
    os <<"        \"RepealedTimes\": \"" <<aRspRepealField.RepealedTimes  <<"\"," <<std::endl;
    os <<"        \"BankRepealFlag\": \"" <<aRspRepealField.BankRepealFlag  <<"\"," <<std::endl;
    os <<"        \"BrokerRepealFlag\": \"" <<aRspRepealField.BrokerRepealFlag  <<"\"," <<std::endl;
    os <<"        \"PlateRepealSerial\": \"" <<aRspRepealField.PlateRepealSerial  <<"\"," <<std::endl;
    os <<"        \"BankRepealSerial\": \"" <<aRspRepealField.BankRepealSerial  <<"\"," <<std::endl;
    os <<"        \"FutureRepealSerial\": \"" <<aRspRepealField.FutureRepealSerial  <<"\"," <<std::endl;
    os <<"        \"TradeCode\": \"" <<aRspRepealField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aRspRepealField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aRspRepealField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspRepealField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aRspRepealField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aRspRepealField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRspRepealField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aRspRepealField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspRepealField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aRspRepealField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aRspRepealField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspRepealField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aRspRepealField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aRspRepealField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aRspRepealField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aRspRepealField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aRspRepealField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aRspRepealField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aRspRepealField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aRspRepealField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aRspRepealField.InstallID  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aRspRepealField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspRepealField.UserID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aRspRepealField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aRspRepealField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"TradeAmount\": \"" <<aRspRepealField.TradeAmount  <<"\"," <<std::endl;
    os <<"        \"FutureFetchAmount\": \"" <<aRspRepealField.FutureFetchAmount  <<"\"," <<std::endl;
    os <<"        \"FeePayFlag\": \"" <<aRspRepealField.FeePayFlag  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aRspRepealField.CustFee  <<"\"," <<std::endl;
    os <<"        \"BrokerFee\": \"" <<aRspRepealField.BrokerFee  <<"\"," <<std::endl;
    os <<"        \"Message\": \"" <<aRspRepealField.Message  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aRspRepealField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aRspRepealField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aRspRepealField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aRspRepealField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aRspRepealField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aRspRepealField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aRspRepealField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aRspRepealField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aRspRepealField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aRspRepealField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aRspRepealField.TID  <<"\"," <<std::endl;
    os <<"        \"TransferStatus\": \"" <<aRspRepealField.TransferStatus  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspRepealField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspRepealField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqQueryAccountField const& aReqQueryAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqQueryAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqQueryAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqQueryAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqQueryAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqQueryAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqQueryAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqQueryAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqQueryAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqQueryAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqQueryAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqQueryAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqQueryAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqQueryAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aReqQueryAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aReqQueryAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aReqQueryAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aReqQueryAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aReqQueryAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aReqQueryAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aReqQueryAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqQueryAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aReqQueryAccountField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqQueryAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqQueryAccountField.UserID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aReqQueryAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqQueryAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqQueryAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aReqQueryAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aReqQueryAccountField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aReqQueryAccountField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqQueryAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aReqQueryAccountField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aReqQueryAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aReqQueryAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aReqQueryAccountField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aReqQueryAccountField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqQueryAccountField.TID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspQueryAccountField const& aRspQueryAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspQueryAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aRspQueryAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aRspQueryAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aRspQueryAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspQueryAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aRspQueryAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aRspQueryAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRspQueryAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aRspQueryAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspQueryAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aRspQueryAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aRspQueryAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspQueryAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aRspQueryAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aRspQueryAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aRspQueryAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aRspQueryAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aRspQueryAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aRspQueryAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aRspQueryAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aRspQueryAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aRspQueryAccountField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aRspQueryAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspQueryAccountField.UserID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aRspQueryAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aRspQueryAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aRspQueryAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aRspQueryAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aRspQueryAccountField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aRspQueryAccountField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aRspQueryAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aRspQueryAccountField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aRspQueryAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aRspQueryAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aRspQueryAccountField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aRspQueryAccountField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aRspQueryAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"BankUseAmount\": \"" <<aRspQueryAccountField.BankUseAmount  <<"\"," <<std::endl;
    os <<"        \"BankFetchAmount\": \"" <<aRspQueryAccountField.BankFetchAmount  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcFutureSignIOField const& aFutureSignIOField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcFutureSignIOField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aFutureSignIOField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aFutureSignIOField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aFutureSignIOField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aFutureSignIOField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aFutureSignIOField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aFutureSignIOField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aFutureSignIOField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aFutureSignIOField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aFutureSignIOField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aFutureSignIOField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aFutureSignIOField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aFutureSignIOField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aFutureSignIOField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aFutureSignIOField.UserID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aFutureSignIOField.Digest  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aFutureSignIOField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aFutureSignIOField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aFutureSignIOField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aFutureSignIOField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aFutureSignIOField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aFutureSignIOField.TID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspFutureSignInField const& aRspFutureSignInField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspFutureSignInField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aRspFutureSignInField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aRspFutureSignInField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aRspFutureSignInField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspFutureSignInField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aRspFutureSignInField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aRspFutureSignInField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRspFutureSignInField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aRspFutureSignInField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspFutureSignInField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aRspFutureSignInField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aRspFutureSignInField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspFutureSignInField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aRspFutureSignInField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspFutureSignInField.UserID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aRspFutureSignInField.Digest  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aRspFutureSignInField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aRspFutureSignInField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aRspFutureSignInField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aRspFutureSignInField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aRspFutureSignInField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aRspFutureSignInField.TID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspFutureSignInField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspFutureSignInField.ErrorMsg  <<"\"," <<std::endl;
    os <<"        \"PinKey\": \"" <<aRspFutureSignInField.PinKey  <<"\"," <<std::endl;
    os <<"        \"MacKey\": \"" <<aRspFutureSignInField.MacKey  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqFutureSignOutField const& aReqFutureSignOutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqFutureSignOutField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqFutureSignOutField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqFutureSignOutField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqFutureSignOutField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqFutureSignOutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqFutureSignOutField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqFutureSignOutField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqFutureSignOutField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqFutureSignOutField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqFutureSignOutField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqFutureSignOutField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqFutureSignOutField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqFutureSignOutField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqFutureSignOutField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqFutureSignOutField.UserID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqFutureSignOutField.Digest  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqFutureSignOutField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aReqFutureSignOutField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqFutureSignOutField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aReqFutureSignOutField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aReqFutureSignOutField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqFutureSignOutField.TID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspFutureSignOutField const& aRspFutureSignOutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspFutureSignOutField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aRspFutureSignOutField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aRspFutureSignOutField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aRspFutureSignOutField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspFutureSignOutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aRspFutureSignOutField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aRspFutureSignOutField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRspFutureSignOutField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aRspFutureSignOutField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspFutureSignOutField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aRspFutureSignOutField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aRspFutureSignOutField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspFutureSignOutField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aRspFutureSignOutField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspFutureSignOutField.UserID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aRspFutureSignOutField.Digest  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aRspFutureSignOutField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aRspFutureSignOutField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aRspFutureSignOutField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aRspFutureSignOutField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aRspFutureSignOutField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aRspFutureSignOutField.TID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspFutureSignOutField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspFutureSignOutField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqQueryTradeResultBySerialField const& aReqQueryTradeResultBySerialField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqQueryTradeResultBySerialField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqQueryTradeResultBySerialField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqQueryTradeResultBySerialField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqQueryTradeResultBySerialField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqQueryTradeResultBySerialField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqQueryTradeResultBySerialField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqQueryTradeResultBySerialField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqQueryTradeResultBySerialField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqQueryTradeResultBySerialField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqQueryTradeResultBySerialField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqQueryTradeResultBySerialField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqQueryTradeResultBySerialField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqQueryTradeResultBySerialField.SessionID  <<"\"," <<std::endl;
    os <<"        \"Reference\": \"" <<aReqQueryTradeResultBySerialField.Reference  <<"\"," <<std::endl;
    os <<"        \"RefrenceIssureType\": \"" <<aReqQueryTradeResultBySerialField.RefrenceIssureType  <<"\"," <<std::endl;
    os <<"        \"RefrenceIssure\": \"" <<aReqQueryTradeResultBySerialField.RefrenceIssure  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aReqQueryTradeResultBySerialField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aReqQueryTradeResultBySerialField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aReqQueryTradeResultBySerialField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aReqQueryTradeResultBySerialField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aReqQueryTradeResultBySerialField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aReqQueryTradeResultBySerialField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aReqQueryTradeResultBySerialField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aReqQueryTradeResultBySerialField.Password  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aReqQueryTradeResultBySerialField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"TradeAmount\": \"" <<aReqQueryTradeResultBySerialField.TradeAmount  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqQueryTradeResultBySerialField.Digest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspQueryTradeResultBySerialField const& aRspQueryTradeResultBySerialField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspQueryTradeResultBySerialField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aRspQueryTradeResultBySerialField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aRspQueryTradeResultBySerialField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aRspQueryTradeResultBySerialField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspQueryTradeResultBySerialField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aRspQueryTradeResultBySerialField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aRspQueryTradeResultBySerialField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRspQueryTradeResultBySerialField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aRspQueryTradeResultBySerialField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspQueryTradeResultBySerialField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aRspQueryTradeResultBySerialField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aRspQueryTradeResultBySerialField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspQueryTradeResultBySerialField.SessionID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspQueryTradeResultBySerialField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspQueryTradeResultBySerialField.ErrorMsg  <<"\"," <<std::endl;
    os <<"        \"Reference\": \"" <<aRspQueryTradeResultBySerialField.Reference  <<"\"," <<std::endl;
    os <<"        \"RefrenceIssureType\": \"" <<aRspQueryTradeResultBySerialField.RefrenceIssureType  <<"\"," <<std::endl;
    os <<"        \"RefrenceIssure\": \"" <<aRspQueryTradeResultBySerialField.RefrenceIssure  <<"\"," <<std::endl;
    os <<"        \"OriginReturnCode\": \"" <<aRspQueryTradeResultBySerialField.OriginReturnCode  <<"\"," <<std::endl;
    os <<"        \"OriginDescrInfoForReturnCode\": \"" <<aRspQueryTradeResultBySerialField.OriginDescrInfoForReturnCode  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aRspQueryTradeResultBySerialField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aRspQueryTradeResultBySerialField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aRspQueryTradeResultBySerialField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aRspQueryTradeResultBySerialField.Password  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aRspQueryTradeResultBySerialField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"TradeAmount\": \"" <<aRspQueryTradeResultBySerialField.TradeAmount  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aRspQueryTradeResultBySerialField.Digest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqDayEndFileReadyField const& aReqDayEndFileReadyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqDayEndFileReadyField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqDayEndFileReadyField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqDayEndFileReadyField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqDayEndFileReadyField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqDayEndFileReadyField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqDayEndFileReadyField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqDayEndFileReadyField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqDayEndFileReadyField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqDayEndFileReadyField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqDayEndFileReadyField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqDayEndFileReadyField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqDayEndFileReadyField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqDayEndFileReadyField.SessionID  <<"\"," <<std::endl;
    os <<"        \"FileBusinessCode\": \"" <<aReqDayEndFileReadyField.FileBusinessCode  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aReqDayEndFileReadyField.Digest  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReturnResultField const& aReturnResultField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReturnResultField\": {" <<std::endl;
    os <<"        \"ReturnCode\": \"" <<aReturnResultField.ReturnCode  <<"\"," <<std::endl;
    os <<"        \"DescrInfoForReturnCode\": \"" <<aReturnResultField.DescrInfoForReturnCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcVerifyFuturePasswordField const& aVerifyFuturePasswordField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcVerifyFuturePasswordField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aVerifyFuturePasswordField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aVerifyFuturePasswordField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aVerifyFuturePasswordField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aVerifyFuturePasswordField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aVerifyFuturePasswordField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aVerifyFuturePasswordField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aVerifyFuturePasswordField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aVerifyFuturePasswordField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aVerifyFuturePasswordField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aVerifyFuturePasswordField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aVerifyFuturePasswordField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aVerifyFuturePasswordField.SessionID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aVerifyFuturePasswordField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aVerifyFuturePasswordField.Password  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aVerifyFuturePasswordField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aVerifyFuturePasswordField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aVerifyFuturePasswordField.InstallID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aVerifyFuturePasswordField.TID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcVerifyCustInfoField const& aVerifyCustInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcVerifyCustInfoField\": {" <<std::endl;
    os <<"        \"CustomerName\": \"" <<aVerifyCustInfoField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aVerifyCustInfoField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aVerifyCustInfoField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aVerifyCustInfoField.CustType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcVerifyFuturePasswordAndCustInfoField const& aVerifyFuturePasswordAndCustInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcVerifyFuturePasswordAndCustInfoField\": {" <<std::endl;
    os <<"        \"CustomerName\": \"" <<aVerifyFuturePasswordAndCustInfoField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aVerifyFuturePasswordAndCustInfoField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aVerifyFuturePasswordAndCustInfoField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aVerifyFuturePasswordAndCustInfoField.CustType  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aVerifyFuturePasswordAndCustInfoField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aVerifyFuturePasswordAndCustInfoField.Password  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcDepositResultInformField const& aDepositResultInformField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcDepositResultInformField\": {" <<std::endl;
    os <<"        \"DepositSeqNo\": \"" <<aDepositResultInformField.DepositSeqNo  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aDepositResultInformField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aDepositResultInformField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"Deposit\": \"" <<aDepositResultInformField.Deposit  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aDepositResultInformField.RequestID  <<"\"," <<std::endl;
    os <<"        \"ReturnCode\": \"" <<aDepositResultInformField.ReturnCode  <<"\"," <<std::endl;
    os <<"        \"DescrInfoForReturnCode\": \"" <<aDepositResultInformField.DescrInfoForReturnCode  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcReqSyncKeyField const& aReqSyncKeyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcReqSyncKeyField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aReqSyncKeyField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aReqSyncKeyField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aReqSyncKeyField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aReqSyncKeyField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aReqSyncKeyField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aReqSyncKeyField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aReqSyncKeyField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aReqSyncKeyField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aReqSyncKeyField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aReqSyncKeyField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aReqSyncKeyField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aReqSyncKeyField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aReqSyncKeyField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aReqSyncKeyField.UserID  <<"\"," <<std::endl;
    os <<"        \"Message\": \"" <<aReqSyncKeyField.Message  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aReqSyncKeyField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aReqSyncKeyField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aReqSyncKeyField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aReqSyncKeyField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aReqSyncKeyField.TID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcRspSyncKeyField const& aRspSyncKeyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcRspSyncKeyField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aRspSyncKeyField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aRspSyncKeyField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aRspSyncKeyField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aRspSyncKeyField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aRspSyncKeyField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aRspSyncKeyField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aRspSyncKeyField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aRspSyncKeyField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aRspSyncKeyField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aRspSyncKeyField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aRspSyncKeyField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aRspSyncKeyField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aRspSyncKeyField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aRspSyncKeyField.UserID  <<"\"," <<std::endl;
    os <<"        \"Message\": \"" <<aRspSyncKeyField.Message  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aRspSyncKeyField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aRspSyncKeyField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aRspSyncKeyField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aRspSyncKeyField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aRspSyncKeyField.TID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aRspSyncKeyField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aRspSyncKeyField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcNotifyQueryAccountField const& aNotifyQueryAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcNotifyQueryAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aNotifyQueryAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aNotifyQueryAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aNotifyQueryAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aNotifyQueryAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aNotifyQueryAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aNotifyQueryAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aNotifyQueryAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aNotifyQueryAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aNotifyQueryAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aNotifyQueryAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aNotifyQueryAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aNotifyQueryAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aNotifyQueryAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aNotifyQueryAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aNotifyQueryAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aNotifyQueryAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aNotifyQueryAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aNotifyQueryAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aNotifyQueryAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aNotifyQueryAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aNotifyQueryAccountField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aNotifyQueryAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aNotifyQueryAccountField.UserID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aNotifyQueryAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aNotifyQueryAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aNotifyQueryAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aNotifyQueryAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aNotifyQueryAccountField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aNotifyQueryAccountField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aNotifyQueryAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aNotifyQueryAccountField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aNotifyQueryAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aNotifyQueryAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aNotifyQueryAccountField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aNotifyQueryAccountField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aNotifyQueryAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"BankUseAmount\": \"" <<aNotifyQueryAccountField.BankUseAmount  <<"\"," <<std::endl;
    os <<"        \"BankFetchAmount\": \"" <<aNotifyQueryAccountField.BankFetchAmount  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aNotifyQueryAccountField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aNotifyQueryAccountField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcTransferSerialField const& aTransferSerialField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcTransferSerialField\": {" <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aTransferSerialField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aTransferSerialField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aTransferSerialField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aTransferSerialField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"TradeCode\": \"" <<aTransferSerialField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aTransferSerialField.SessionID  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aTransferSerialField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aTransferSerialField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aTransferSerialField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aTransferSerialField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aTransferSerialField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aTransferSerialField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aTransferSerialField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"FutureAccType\": \"" <<aTransferSerialField.FutureAccType  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aTransferSerialField.AccountID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aTransferSerialField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"FutureSerial\": \"" <<aTransferSerialField.FutureSerial  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aTransferSerialField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aTransferSerialField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aTransferSerialField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"TradeAmount\": \"" <<aTransferSerialField.TradeAmount  <<"\"," <<std::endl;
    os <<"        \"CustFee\": \"" <<aTransferSerialField.CustFee  <<"\"," <<std::endl;
    os <<"        \"BrokerFee\": \"" <<aTransferSerialField.BrokerFee  <<"\"," <<std::endl;
    os <<"        \"AvailabilityFlag\": \"" <<aTransferSerialField.AvailabilityFlag  <<"\"," <<std::endl;
    os <<"        \"OperatorCode\": \"" <<aTransferSerialField.OperatorCode  <<"\"," <<std::endl;
    os <<"        \"BankNewAccount\": \"" <<aTransferSerialField.BankNewAccount  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aTransferSerialField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aTransferSerialField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryTransferSerialField const& aQryTransferSerialField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryTransferSerialField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryTransferSerialField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aQryTransferSerialField.AccountID  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aQryTransferSerialField.BankID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcNotifyFutureSignInField const& aNotifyFutureSignInField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcNotifyFutureSignInField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aNotifyFutureSignInField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aNotifyFutureSignInField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aNotifyFutureSignInField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aNotifyFutureSignInField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aNotifyFutureSignInField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aNotifyFutureSignInField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aNotifyFutureSignInField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aNotifyFutureSignInField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aNotifyFutureSignInField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aNotifyFutureSignInField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aNotifyFutureSignInField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aNotifyFutureSignInField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aNotifyFutureSignInField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aNotifyFutureSignInField.UserID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aNotifyFutureSignInField.Digest  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aNotifyFutureSignInField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aNotifyFutureSignInField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aNotifyFutureSignInField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aNotifyFutureSignInField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aNotifyFutureSignInField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aNotifyFutureSignInField.TID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aNotifyFutureSignInField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aNotifyFutureSignInField.ErrorMsg  <<"\"," <<std::endl;
    os <<"        \"PinKey\": \"" <<aNotifyFutureSignInField.PinKey  <<"\"," <<std::endl;
    os <<"        \"MacKey\": \"" <<aNotifyFutureSignInField.MacKey  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcNotifyFutureSignOutField const& aNotifyFutureSignOutField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcNotifyFutureSignOutField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aNotifyFutureSignOutField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aNotifyFutureSignOutField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aNotifyFutureSignOutField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aNotifyFutureSignOutField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aNotifyFutureSignOutField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aNotifyFutureSignOutField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aNotifyFutureSignOutField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aNotifyFutureSignOutField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aNotifyFutureSignOutField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aNotifyFutureSignOutField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aNotifyFutureSignOutField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aNotifyFutureSignOutField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aNotifyFutureSignOutField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aNotifyFutureSignOutField.UserID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aNotifyFutureSignOutField.Digest  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aNotifyFutureSignOutField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aNotifyFutureSignOutField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aNotifyFutureSignOutField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aNotifyFutureSignOutField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aNotifyFutureSignOutField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aNotifyFutureSignOutField.TID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aNotifyFutureSignOutField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aNotifyFutureSignOutField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcNotifySyncKeyField const& aNotifySyncKeyField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcNotifySyncKeyField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aNotifySyncKeyField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aNotifySyncKeyField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aNotifySyncKeyField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aNotifySyncKeyField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aNotifySyncKeyField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aNotifySyncKeyField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aNotifySyncKeyField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aNotifySyncKeyField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aNotifySyncKeyField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aNotifySyncKeyField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aNotifySyncKeyField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aNotifySyncKeyField.SessionID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aNotifySyncKeyField.InstallID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aNotifySyncKeyField.UserID  <<"\"," <<std::endl;
    os <<"        \"Message\": \"" <<aNotifySyncKeyField.Message  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aNotifySyncKeyField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aNotifySyncKeyField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aNotifySyncKeyField.OperNo  <<"\"," <<std::endl;
    os <<"        \"RequestID\": \"" <<aNotifySyncKeyField.RequestID  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aNotifySyncKeyField.TID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aNotifySyncKeyField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aNotifySyncKeyField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcQryAccountregisterField const& aQryAccountregisterField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcQryAccountregisterField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aQryAccountregisterField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aQryAccountregisterField.AccountID  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aQryAccountregisterField.BankID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcAccountregisterField const& aAccountregisterField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcAccountregisterField\": {" <<std::endl;
    os <<"        \"TradeDay\": \"" <<aAccountregisterField.TradeDay  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aAccountregisterField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aAccountregisterField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aAccountregisterField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aAccountregisterField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aAccountregisterField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aAccountregisterField.AccountID  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aAccountregisterField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aAccountregisterField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aAccountregisterField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aAccountregisterField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"OpenOrDestroy\": \"" <<aAccountregisterField.OpenOrDestroy  <<"\"," <<std::endl;
    os <<"        \"RegDate\": \"" <<aAccountregisterField.RegDate  <<"\"," <<std::endl;
    os <<"        \"OutDate\": \"" <<aAccountregisterField.OutDate  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aAccountregisterField.TID  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aAccountregisterField.CustType  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aAccountregisterField.BankAccType  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcOpenAccountField const& aOpenAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcOpenAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aOpenAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aOpenAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aOpenAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aOpenAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aOpenAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aOpenAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aOpenAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aOpenAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aOpenAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aOpenAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aOpenAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aOpenAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aOpenAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aOpenAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aOpenAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"Gender\": \"" <<aOpenAccountField.Gender  <<"\"," <<std::endl;
    os <<"        \"CountryCode\": \"" <<aOpenAccountField.CountryCode  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aOpenAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aOpenAccountField.Address  <<"\"," <<std::endl;
    os <<"        \"ZipCode\": \"" <<aOpenAccountField.ZipCode  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aOpenAccountField.Telephone  <<"\"," <<std::endl;
    os <<"        \"MobilePhone\": \"" <<aOpenAccountField.MobilePhone  <<"\"," <<std::endl;
    os <<"        \"Fax\": \"" <<aOpenAccountField.Fax  <<"\"," <<std::endl;
    os <<"        \"EMail\": \"" <<aOpenAccountField.EMail  <<"\"," <<std::endl;
    os <<"        \"MoneyAccountStatus\": \"" <<aOpenAccountField.MoneyAccountStatus  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aOpenAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aOpenAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aOpenAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aOpenAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aOpenAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aOpenAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aOpenAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"CashExchangeCode\": \"" <<aOpenAccountField.CashExchangeCode  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aOpenAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aOpenAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aOpenAccountField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aOpenAccountField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aOpenAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aOpenAccountField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aOpenAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aOpenAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aOpenAccountField.OperNo  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aOpenAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aOpenAccountField.UserID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aOpenAccountField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aOpenAccountField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcCancelAccountField const& aCancelAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcCancelAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aCancelAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aCancelAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aCancelAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aCancelAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aCancelAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aCancelAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aCancelAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aCancelAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aCancelAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aCancelAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aCancelAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aCancelAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aCancelAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aCancelAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aCancelAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"Gender\": \"" <<aCancelAccountField.Gender  <<"\"," <<std::endl;
    os <<"        \"CountryCode\": \"" <<aCancelAccountField.CountryCode  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aCancelAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aCancelAccountField.Address  <<"\"," <<std::endl;
    os <<"        \"ZipCode\": \"" <<aCancelAccountField.ZipCode  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aCancelAccountField.Telephone  <<"\"," <<std::endl;
    os <<"        \"MobilePhone\": \"" <<aCancelAccountField.MobilePhone  <<"\"," <<std::endl;
    os <<"        \"Fax\": \"" <<aCancelAccountField.Fax  <<"\"," <<std::endl;
    os <<"        \"EMail\": \"" <<aCancelAccountField.EMail  <<"\"," <<std::endl;
    os <<"        \"MoneyAccountStatus\": \"" <<aCancelAccountField.MoneyAccountStatus  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aCancelAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aCancelAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aCancelAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aCancelAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aCancelAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aCancelAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aCancelAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"CashExchangeCode\": \"" <<aCancelAccountField.CashExchangeCode  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aCancelAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aCancelAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"DeviceID\": \"" <<aCancelAccountField.DeviceID  <<"\"," <<std::endl;
    os <<"        \"BankSecuAccType\": \"" <<aCancelAccountField.BankSecuAccType  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aCancelAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankSecuAcc\": \"" <<aCancelAccountField.BankSecuAcc  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aCancelAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aCancelAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"OperNo\": \"" <<aCancelAccountField.OperNo  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aCancelAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aCancelAccountField.UserID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aCancelAccountField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aCancelAccountField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcChangeAccountField const& aChangeAccountField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcChangeAccountField\": {" <<std::endl;
    os <<"        \"TradeCode\": \"" <<aChangeAccountField.TradeCode  <<"\"," <<std::endl;
    os <<"        \"BankID\": \"" <<aChangeAccountField.BankID  <<"\"," <<std::endl;
    os <<"        \"BankBranchID\": \"" <<aChangeAccountField.BankBranchID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aChangeAccountField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"BrokerBranchID\": \"" <<aChangeAccountField.BrokerBranchID  <<"\"," <<std::endl;
    os <<"        \"TradeDate\": \"" <<aChangeAccountField.TradeDate  <<"\"," <<std::endl;
    os <<"        \"TradeTime\": \"" <<aChangeAccountField.TradeTime  <<"\"," <<std::endl;
    os <<"        \"BankSerial\": \"" <<aChangeAccountField.BankSerial  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aChangeAccountField.TradingDay  <<"\"," <<std::endl;
    os <<"        \"PlateSerial\": \"" <<aChangeAccountField.PlateSerial  <<"\"," <<std::endl;
    os <<"        \"LastFragment\": \"" <<aChangeAccountField.LastFragment  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aChangeAccountField.SessionID  <<"\"," <<std::endl;
    os <<"        \"CustomerName\": \"" <<aChangeAccountField.CustomerName  <<"\"," <<std::endl;
    os <<"        \"IdCardType\": \"" <<aChangeAccountField.IdCardType  <<"\"," <<std::endl;
    os <<"        \"IdentifiedCardNo\": \"" <<aChangeAccountField.IdentifiedCardNo  <<"\"," <<std::endl;
    os <<"        \"Gender\": \"" <<aChangeAccountField.Gender  <<"\"," <<std::endl;
    os <<"        \"CountryCode\": \"" <<aChangeAccountField.CountryCode  <<"\"," <<std::endl;
    os <<"        \"CustType\": \"" <<aChangeAccountField.CustType  <<"\"," <<std::endl;
    os <<"        \"Address\": \"" <<aChangeAccountField.Address  <<"\"," <<std::endl;
    os <<"        \"ZipCode\": \"" <<aChangeAccountField.ZipCode  <<"\"," <<std::endl;
    os <<"        \"Telephone\": \"" <<aChangeAccountField.Telephone  <<"\"," <<std::endl;
    os <<"        \"MobilePhone\": \"" <<aChangeAccountField.MobilePhone  <<"\"," <<std::endl;
    os <<"        \"Fax\": \"" <<aChangeAccountField.Fax  <<"\"," <<std::endl;
    os <<"        \"EMail\": \"" <<aChangeAccountField.EMail  <<"\"," <<std::endl;
    os <<"        \"MoneyAccountStatus\": \"" <<aChangeAccountField.MoneyAccountStatus  <<"\"," <<std::endl;
    os <<"        \"BankAccount\": \"" <<aChangeAccountField.BankAccount  <<"\"," <<std::endl;
    os <<"        \"BankPassWord\": \"" <<aChangeAccountField.BankPassWord  <<"\"," <<std::endl;
    os <<"        \"NewBankAccount\": \"" <<aChangeAccountField.NewBankAccount  <<"\"," <<std::endl;
    os <<"        \"NewBankPassWord\": \"" <<aChangeAccountField.NewBankPassWord  <<"\"," <<std::endl;
    os <<"        \"AccountID\": \"" <<aChangeAccountField.AccountID  <<"\"," <<std::endl;
    os <<"        \"Password\": \"" <<aChangeAccountField.Password  <<"\"," <<std::endl;
    os <<"        \"BankAccType\": \"" <<aChangeAccountField.BankAccType  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aChangeAccountField.InstallID  <<"\"," <<std::endl;
    os <<"        \"VerifyCertNoFlag\": \"" <<aChangeAccountField.VerifyCertNoFlag  <<"\"," <<std::endl;
    os <<"        \"CurrencyID\": \"" <<aChangeAccountField.CurrencyID  <<"\"," <<std::endl;
    os <<"        \"BrokerIDByBank\": \"" <<aChangeAccountField.BrokerIDByBank  <<"\"," <<std::endl;
    os <<"        \"BankPwdFlag\": \"" <<aChangeAccountField.BankPwdFlag  <<"\"," <<std::endl;
    os <<"        \"SecuPwdFlag\": \"" <<aChangeAccountField.SecuPwdFlag  <<"\"," <<std::endl;
    os <<"        \"TID\": \"" <<aChangeAccountField.TID  <<"\"," <<std::endl;
    os <<"        \"Digest\": \"" <<aChangeAccountField.Digest  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aChangeAccountField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aChangeAccountField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcUserRightsAssignField const& aUserRightsAssignField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcUserRightsAssignField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aUserRightsAssignField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aUserRightsAssignField.UserID  <<"\"," <<std::endl;
    os <<"        \"DRIdentityID\": \"" <<aUserRightsAssignField.DRIdentityID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcBrokerUserRightAssignField const& aBrokerUserRightAssignField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcBrokerUserRightAssignField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aBrokerUserRightAssignField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"DRIdentityID\": \"" <<aBrokerUserRightAssignField.DRIdentityID  <<"\"," <<std::endl;
    os <<"        \"Tradeable\": \"" <<aBrokerUserRightAssignField.Tradeable  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcDRTransferField const& aDRTransferField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcDRTransferField\": {" <<std::endl;
    os <<"        \"OrigDRIdentityID\": \"" <<aDRTransferField.OrigDRIdentityID  <<"\"," <<std::endl;
    os <<"        \"DestDRIdentityID\": \"" <<aDRTransferField.DestDRIdentityID  <<"\"," <<std::endl;
    os <<"        \"OrigBrokerID\": \"" <<aDRTransferField.OrigBrokerID  <<"\"," <<std::endl;
    os <<"        \"DestBrokerID\": \"" <<aDRTransferField.DestBrokerID  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcForQuoteField const& aForQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcForQuoteField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aForQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aForQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aForQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aForQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aForQuoteField.SessionID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aForQuoteField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aForQuoteField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aForQuoteField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aForQuoteField.InstallID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aForQuoteField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aForQuoteField.ClientID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aForQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"ReqForQuoteTime\": \"" <<aForQuoteField.ReqForQuoteTime  <<"\"," <<std::endl;
    os <<"        \"ReqForQuoteID\": \"" <<aForQuoteField.ReqForQuoteID  <<"\"," <<std::endl;
    os <<"        \"TradingDay\": \"" <<aForQuoteField.TradingDay  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcInputForQuoteField const& aInputForQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcInputForQuoteField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aInputForQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aInputForQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aInputForQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aInputForQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aInputForQuoteField.SessionID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aInputForQuoteField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aInputForQuoteField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aInputForQuoteField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aInputForQuoteField.InstallID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aInputForQuoteField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aInputForQuoteField.ClientID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aInputForQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"ReqForQuoteTime\": \"" <<aInputForQuoteField.ReqForQuoteTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchRspForQuoteField const& aExchRspForQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchRspForQuoteField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchRspForQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExchRspForQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExchRspForQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aExchRspForQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aExchRspForQuoteField.SessionID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aExchRspForQuoteField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aExchRspForQuoteField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchRspForQuoteField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchRspForQuoteField.InstallID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchRspForQuoteField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExchRspForQuoteField.ClientID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aExchRspForQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"ReqForQuoteTime\": \"" <<aExchRspForQuoteField.ReqForQuoteTime  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcErrRtnExchRtnForQuoteField const& aErrRtnExchRtnForQuoteField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcErrRtnExchRtnForQuoteField\": {" <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aErrRtnExchRtnForQuoteField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"BrokerID\": \"" <<aErrRtnExchRtnForQuoteField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aErrRtnExchRtnForQuoteField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"InstrumentID\": \"" <<aErrRtnExchRtnForQuoteField.InstrumentID  <<"\"," <<std::endl;
    os <<"        \"SessionID\": \"" <<aErrRtnExchRtnForQuoteField.SessionID  <<"\"," <<std::endl;
    os <<"        \"OrderRef\": \"" <<aErrRtnExchRtnForQuoteField.OrderRef  <<"\"," <<std::endl;
    os <<"        \"OrderLocalID\": \"" <<aErrRtnExchRtnForQuoteField.OrderLocalID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aErrRtnExchRtnForQuoteField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aErrRtnExchRtnForQuoteField.InstallID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aErrRtnExchRtnForQuoteField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aErrRtnExchRtnForQuoteField.ClientID  <<"\"," <<std::endl;
    os <<"        \"UserID\": \"" <<aErrRtnExchRtnForQuoteField.UserID  <<"\"," <<std::endl;
    os <<"        \"ReqForQuoteTime\": \"" <<aErrRtnExchRtnForQuoteField.ReqForQuoteTime  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aErrRtnExchRtnForQuoteField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aErrRtnExchRtnForQuoteField.ErrorMsg  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcExchangeQuoteInsertErrorField const& aExchangeQuoteInsertErrorField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcExchangeQuoteInsertErrorField\": {" <<std::endl;
    os <<"        \"BrokerID\": \"" <<aExchangeQuoteInsertErrorField.BrokerID  <<"\"," <<std::endl;
    os <<"        \"ExchangeID\": \"" <<aExchangeQuoteInsertErrorField.ExchangeID  <<"\"," <<std::endl;
    os <<"        \"ParticipantID\": \"" <<aExchangeQuoteInsertErrorField.ParticipantID  <<"\"," <<std::endl;
    os <<"        \"TraderID\": \"" <<aExchangeQuoteInsertErrorField.TraderID  <<"\"," <<std::endl;
    os <<"        \"InstallID\": \"" <<aExchangeQuoteInsertErrorField.InstallID  <<"\"," <<std::endl;
    os <<"        \"QuoteLocalID\": \"" <<aExchangeQuoteInsertErrorField.QuoteLocalID  <<"\"," <<std::endl;
    os <<"        \"ErrorID\": \"" <<aExchangeQuoteInsertErrorField.ErrorID  <<"\"," <<std::endl;
    os <<"        \"ErrorMsg\": \"" <<aExchangeQuoteInsertErrorField.ErrorMsg  <<"\"," <<std::endl;
    os <<"        \"ClientID\": \"" <<aExchangeQuoteInsertErrorField.ClientID  <<"\"," <<std::endl;
    os <<"        \"InvestorID\": \"" <<aExchangeQuoteInsertErrorField.InvestorID  <<"\"," <<std::endl;
    os <<"        \"BusinessUnit\": \"" <<aExchangeQuoteInsertErrorField.BusinessUnit  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

template< typename CharT, typename TraitsT >
std::basic_ostream< CharT, TraitsT >& operator<<(std::basic_ostream< CharT, TraitsT >& os, CZeusingFtdcMulticastGroupInfoField const& aMulticastGroupInfoField)
{
    os <<std::endl;
    os <<"{" <<std::endl;
    os <<"    \"CZeusingFtdcMulticastGroupInfoField\": {" <<std::endl;
    os <<"        \"GroupIP\": \"" <<aMulticastGroupInfoField.GroupIP  <<"\"," <<std::endl;
    os <<"        \"GroupPort\": \"" <<aMulticastGroupInfoField.GroupPort  <<"\"," <<std::endl;
    os <<"        \"SourceIP\": \"" <<aMulticastGroupInfoField.SourceIP  <<"\"" <<std::endl;
    os <<"    }" <<std::endl;
    os <<"}" <<std::endl;
}

#endif // ZEUSINGFTDC_USERAPI_STRUCT_PRINT_HH
