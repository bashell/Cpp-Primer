#include <iostream>

using std::endl;
using std::cout;

int main()
{
  int i = 5;
  auto lamb = [&i]() { return --i ? false : true; };
  while(!lamb())
    cout << i << " ";
  cout << endl;
  return 0;
}
