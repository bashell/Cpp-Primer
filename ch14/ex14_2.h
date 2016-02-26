#ifndef _EX14_2_H_
#define _EX14_2_H_

#include <iostream>
#include <string>

class Sales_data {
  friend std::istream &operator>>(std::istream&, Sales_data&);
  friend std::ostream &operator<<(std::ostream&, const Sales_data&);
  friend Sales_data operator+(const Sales_data&, const Sales_data&);
 public:
  Sales_data() = Sales_data("", 0, 0.0) {}
  Sales_data(const std::string &s) : bookNo(s) {}
  Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {}
  Sales_data(std::istream &);

  Sales_data &operator+=(const Sales_data&);
  std::string isbn() const { return bookNo; };

 private:
  inline double avg_price() const { return units_sold ? revenue/units_sold : 0; }
 
 private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data::Sales_data(std::istream &is) : Sales_data() {
  is >> *this;
}

std::istream &operator>>(std::istream &is, Sales_data &item) {
  double price = 0.0;
  is >> item.bookNo >> item.units_sole >> price;
  if(is)
    item.revenue = price * item.units_sold;
  else
    item = Sales_data();
  return is;
}

std::ostream &operator<<(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue;
  return os;
}

Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum += rhs;
  return sum;
}

Sales_data &Sales_data::operator+=(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

#endif  // _EX14_2_H_
