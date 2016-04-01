#include <iostream>
#include <string>

#include "ex15_5.h"

double print_total(std::ostream &os, const Quote &item, size_t n) {
  double ret = item.net_price(n);
  os << "ISBN: " << item.isbn() << " # sold: " << n << " total due: " << ret << std::endl;
  return ret;
}

int main()
{
  Quote q("c++ primer", 99.8);
  Bulk_quote bq("c++ primer", 99.8, 9, 0.1);

  print_total(std::cout, q, 10);
  print_total(std::cout, bq, 10);

  return 0;
}
