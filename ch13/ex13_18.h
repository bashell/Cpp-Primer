#ifndef EX13_18_H
#define EX13_18_H

#include <string>
using std::string;

class Employee {
 public:
  Employee();
  Employee(const string &name);
  const int id() const { return id_; }

 private:
  string name_;
  int id_;
  static int incr_;
};

#endif  // EX13_18_H
