#include "TraderOptions.hh"

#include <fstream>
#include <iostream>
#include <boost/program_options.hpp>

namespace zero
{

TraderOptions::TraderOptions():
    options_("TraderOptions")
{
  namespace po = boost::program_options;

  options_.add_options()
      ("zero_trader.flow_path", po::value<std::string>(&flow_path), 
       "flow path")
      ("zero_trader.front_address", po::value<std::string>(&front_address), 
       "front address")
      ("zero_trader.broker_id", po::value<std::string>(&broker_id), 
       "broker id")
      ("zero_trader.user_id", po::value<std::string>(&user_id), 
       "user id")
      ("zero_trader.password", po::value<std::string>(&password), 
       "password")
      ("zero_trader.investor_id", po::value<std::string>(&investor_id), 
       "investor_id")

      ;

  return;
  
}

TraderOptions::~TraderOptions()
{
}

po::options_description* TraderOptions::configOptions()
{
  return &options_;
}

};  
