#ifndef EX7_50_H
#define EX7_50_H

#include <iostream>
#include <string>

class Person {
  friend std::istream &read(std::istream &is, Person &per);
  friend std::ostream &print(std::ostream &os, const Person &per);

 public:
  Person() = default;
  Person(const std::string sname, const std::string saddr) : name_(sname), address_(saddr) {}

  explicit Person(std::istream &is) { read(is, *this); }

  std::string const get_name() const { return name_; }
  std::string const get_addr() const { return address_; }

 private:
  std::string name_;
  std::string address_;
};

std::istream &read(std::istream &is, Person &per) {
  return is >> per.get_name()  >> per.get_addr();
}

std::ostream &print(std::ostream &os, const Person &per) {
  return os << per.get_name() << " " << per.get_addr();
}

#endif
