#include <iostream>

using std::cout; using std::endl;

int main()
{
  auto sum = [] (const int a, const int b) { return a + b; };
  cout << sum(10, 20) << endl;
  return 0;
}
