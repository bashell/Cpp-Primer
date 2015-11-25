#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::count_if;

size_t LargerThanSix(vector<string> &svec) {
  return count_if(svec.begin(), svec.end(),
                [] (const string &s)
                { return s.size() > 6; });
}

int main()
{
  vector<string> svec{"abc", "abcd", "abcdefghi", "abcdefghijklm"};
  cout << LargerThanSix(svec) << endl;
  return 0;
}
