#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::list;

void elimDups(list<string> &words) {
  words.sort();
  words.unique();
}

int main()
{
  list<string> slst{"a", "a", "ab", "ab", "abc", "abcde", "abcdefg", "abcdefg"};
  elimDups(slst);
  for(const auto &s : slst)
    cout << s << " ";
  cout << endl;
  return 0;
}
