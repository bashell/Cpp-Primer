#include "ex13_30.h"

int main()
{
  HasPtr hp1("aaa"), hp2("bbb");
  std::cout << "Before: " << std::endl;
  hp1.show();
  hp2.show();
  swap(hp1, hp2);
  std::cout << "After: " << std::endl;
  hp1.show();
  hp2.show();
  return 0;
}
