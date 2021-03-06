#ifndef _EX15_5_H_
#define _EX15_5_H_

#include "ex15_3.h"

class Bulk_quote : public Quote {
 public:
  Bulk_quote() = default;
  Bulk_quote(const std::string &book, double p, std::size_t qty, double disc)
      : Quote(book, p), min_qty(qty), discount(disc) {}

  double net_price(std::size_t n) const override {
    return (n + 1) * price;
  }
 private:
  std::size_t min_qty = 0;
  double discount = 0.0;
};


#endif  /* _EX15_5_H_ */
