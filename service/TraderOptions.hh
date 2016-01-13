#ifndef ZERO_TRADER_OPTIONS_HH
#define ZERO_TRADER_OPTIONS_HH

#include "soil/Config.hh"

#include <string>

namespace zero
{
namespace po = boost::program_options;

class TraderOptions : public soil::Options
{
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

 private:

  boost::program_options::options_description options_;
};

}  


#endif 
