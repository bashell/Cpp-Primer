#ifndef EX14_36_H
#define EX14_36_H

#include <iostream>
#include <vector>
#include <string>

class GetString {
 public:
  GetString(std::istream &i = std::cin) : is(i) {}
  void operator()(std::vector<std::string> &svec) const {
    std::string str;
    while(std::getline(is, str)) {
      if(is)
        svec.push_back(str);
      else
        return;
    }
  }
 private:
  std::istream &is;
};

#endif  // EX14_36_H
