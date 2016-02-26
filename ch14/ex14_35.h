#ifndef EX14_35_H
#define EX14_35_H

#include <iostream>
#include <string>

class GetString {
 public:
  GetString(std::istream &i = std::cin) : is(i) {}
  std::string operator()() const {
    std::string str;
    std::getline(is, str);
    if(is)
      return str;
    else
      return std::string();
  }
 private:
  std::istream &is;
};

#endif  // EX14_35_H
