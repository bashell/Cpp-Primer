#include <iostream>
#include "ex13_18.h"

int Employee::incr_ = 0;
Employee::Employee() { id_ = incr_++; }
Employee::Employee(const string &name) { id_ = incr_++; name_ = name; }

int main()
{
  Employee e1("a"), e2("b");
  std::cout << "a's id: " << e1.id() << std::endl;
  std::cout << "b's id: " << e2.id() << std::endl;
  return 0;
}
