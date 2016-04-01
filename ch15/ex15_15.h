#ifndef _EX15_15_H_
#define _EX15_15_H_

#include "ex15_3.h"

class Disc_quote : public Quote {
 public:
  Disc_quote() = default;
  Disc_quote(const std::string &book, double price, std::size_t qty, double disc)
      : Quote(book, price), quantity(qty), discount(disc) { }
  double net_price(std::size_t) const override = 0;  //  纯虚函数

 protected:
  std::size_t quantity = 0;
  double discount = 0.0;
};


class Bulk_quote : public Disc_quote {
 public:
  Bulk_quote() = default;
  Bulk_quote(const std::string &book, double price, std::size_t qty, double disc)
      : Disc_quote(book, price, qty, disc) { }
  double net_price(std::size_t) const override;
};

#endif  /* _EX15_15_H_ */
