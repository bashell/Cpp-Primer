#include <iostream>

using std::cout; using std::endl;

int main()
{
  int a = 10;
  auto sum = [a] (const int b) { return a + b; };
  cout << sum(20) << endl;
  return 0;
}
