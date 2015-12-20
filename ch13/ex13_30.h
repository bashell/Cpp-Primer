#ifndef EX13_30_H
#define EX13_30_H

#include <iostream>
#include <string>

class HasPtr {
 public:
  friend void swap(HasPtr&, HasPtr&);

  HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
  HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
  HasPtr &operator=(HasPtr rhs) {
    swap(*this, rhs);
    return *this;
  }
  ~HasPtr() { delete ps; }
  void show() {
    std::cout << *ps << std::endl;
  }
 private:
   std::string *ps;
   int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
  using std::swap;
  swap(lhs.ps, rhs.ps);
  swap(lhs.i, rhs.i);
  std::cout << "call function: swap(HasPtr&, HasPtr&)" << std::endl;
}

#endif  // EX13_30_H
