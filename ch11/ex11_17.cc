#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using std::cout;
using std::endl;
using std::multiset;
using std::vector;
using std::string;
using std::copy;
using std::inserter;
using std::back_inserter;

int main()
{
  multiset<string> c{"abc", "abc"};  // legal.
  vector<string> v{"aa", "bb"};  // legal.
  copy(v.begin(), v.end(), inserter(c, c.end()));
  //copy(v.begin(), v.end(), back_inserter(c));  // illegal. multiset has not member named 'push_back'
  copy(c.begin(), c.end(), inserter(v, v.end()));  // legal.
  copy(c.begin(), c.end(), back_inserter(v));  // legal.
  for(const auto &s : c)
    cout << s << " ";
  cout << endl;
  for(const auto &s : v)
    cout << s << " ";
  cout << endl;
  return 0;
}
