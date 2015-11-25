#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::count_if;
using std::bind;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz) {
  return s.size() <= sz;
}

size_t NotLargerThanSix(vector<string> &svec) {
  return count_if(svec.begin(), svec.end(),
                bind(check_size, _1, 6));
}

int main()
{
  vector<string> svec{"abc", "abcd", "abcdefghi", "abcdefghijklm"};
  cout << NotLargerThanSix(svec) << endl;
  return 0;
}
