// Copyright (c) 2010
// All rights reserved.

#ifndef ZERO_TRADER_OPTIONS_HH
#define ZERO_TRADER_OPTIONS_HH

#include <string>
#include "soil/Config.hh"

namespace zero {

namespace po = boost::program_options;

class TraderOptions : public soil::Options {
 public:
  TraderOptions();
  virtual ~TraderOptions();

  virtual po::options_description* configOptions();

  std::string flow_path;
  std::string front_address;

  std::string broker_id;
  std::string user_id;
  std::string password;

  std::string investor_id;

  bool is_auth_force;

  std::string user_product_info;
  std::string auth_code;

 private:
  boost::program_options::options_description options_;
};

}  // namespace zero

#endif
