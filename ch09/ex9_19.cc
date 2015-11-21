#include <iostream>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
  list<string> slst;
  string s;
  while(cin >> s)
    slst.push_back(s);
  for(auto iter = slst.cbegin(); iter != slst.cend(); ++iter)
    cout << *iter << " ";
  cout << endl;
  return 0;
}
