#include <iostream>
#include <string>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;

int main()
{
  deque<string> sdeq;
  string s;
  while(cin >> s)
    sdeq.push_back(s);
  for(auto iter = sdeq.cbegin(); iter != sdeq.cend(); ++iter)
    cout << *iter << " ";
  cout << endl;
  return 0;
}
