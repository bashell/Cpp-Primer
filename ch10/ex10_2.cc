#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::string;
using std::count;

int main()
{
  list<string> slst{"abc", "abc", "def", "ghi"};
  cout << count(slst.begin(), slst.end(), "abc") << endl;
  return 0;
}
