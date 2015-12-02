#include <iostream>
#include <memory>
#include <string>

using std::unique_ptr;
using std::string;

int main()
{
  unique_ptr<string> p1(new string("Stegosaurus"));
  unique_ptr<string> p2(p1);
  unique_ptr<string> p3;
  p3 = p2;
  return 0;
}
