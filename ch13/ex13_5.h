#ifndef EX_13_5_H
#define EX_13_5_H

#include <string>

class HasPtr {
 public:
  HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
  HasPtr(const HasPtr &hp) : ps(new string(*hp.ps)), i(hp.i) { }

 private:
  std::string *ps;
  int i;
};

#endif  // EX_13_5_H
