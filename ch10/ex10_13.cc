#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::partition;

bool MyCompare(const string &s) {
  return s.size() >= 5;
}

int main()
{
  vector<string> svec{"ab", "abc", "abcd", "abcde", "abcdef"};
  auto iter_part = partition(svec.begin(), svec.end(), MyCompare);
  for(auto iter = svec.cbegin(); iter != iter_part; ++iter)
    cout << *iter << " ";
  cout << endl;
  return 0;
}
