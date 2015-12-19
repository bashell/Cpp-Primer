#ifndef EX13_27_H
#define EX13_27_H

#include <string>

class HasPtr {
 public:
  HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new size_t(1)) { }
  HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i), use(hp.use) { ++*use; }
  HasPtr &operator=(const Has &rhs) {
    ++*rhs.use;
    if(--*use == 0) {
      delete ps;
      delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
  }
  ~HasPtr() {
    if(--*use == 0) {
      delete ps;
      delete use;
    }
  }

 private:
   std::string *ps;
   int i;
   size_t *use;
};

#endif  // EX13_27_H
