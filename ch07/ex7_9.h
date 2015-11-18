#ifndef EX7_4_H
#define EX7_4_H

#include <iostream>
#include <string>

class Person {
  std::string const get_name() const { return name_; }
  std::string const get_addr() const { return address_; }
  
  std::string name_;
  std::string address_;
};

std::istream &read(std::istream &is, Person &per) {
  return is >> per.get_name() >> per.get_addr();
}

std::ostream &print(std::ostream &os, const Person &per) {
  return os << per.get_name() << " " << per.get_addr();
}

#endif
