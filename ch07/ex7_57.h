#ifndef EX7_57_H
#define EX7_57_H

#include <string>

class Account {
 public:
  void calculate() { amount += amount * interestRate; }
  static double rate() { return interestRate; }
  static void rate(double newRate) { interestRate = newRate; }

 private:
  std::string owner;
  double amount;
  static double interestRate;
  static constexpr double todayRate = 12.12;
  static double iniRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif
