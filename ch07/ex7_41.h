#ifndef EX7_41_H
#define EX7_41_H

#include <iostream>
#include <string>


struct Sales_data {
  friend std::istream &read(std::istream &is, Sales_data &item);
  friend std::ostream &print(std::ostream &os, const Sales_data &item);
  friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

 public:
  Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) 
  { std::cout << "Execute this first: Sales_data(const std::string &, unsigned, double)" << std::endl; }

  Sales_data() : Sales_data("", 0, 0.0)
  { std::cout << "Then: Sales_data()" << std::endl; }

  Sales_data(const std::string &s) : Sales_data(s, 0, 0.0) 
  { std::cout << "Then: Sales_data(const std::string &)" << std::endl; }

  Sales_data(std::istream &is) : Sales_data() 
  { read(is, *this); std::cout << "Then: Sales_data(std::istream &)" << std::endl; }
  
  std::string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data&);

 private:
  inline double avg_price() const { return units_sold ? revenue/units_sold : 0; }

 private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue;
  return os;
}

#endif
