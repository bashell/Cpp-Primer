#ifndef EX13_19_H
#define EX13_19_H

#include <string>
using std::string;

class Employee {
 public:
  Employee();
  Employee(const string &name);
  Employee(const Employee &) = delete;
  Employee &operator=(const Employee &) = delete;
  const int id() const { return id_; }

 private:
  string name_;
  string id_;
  static int incr_;
};
#endif  // EX13_19_H
