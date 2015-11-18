#ifndef EX7_5_H
#define EX7_5_H

#include <string>

class Person {
  std::string get_name() const { return name_; }
  std::string get_addr() const { return address_; }
  
  std::string name_;
  std::string address_;
};

#endif
