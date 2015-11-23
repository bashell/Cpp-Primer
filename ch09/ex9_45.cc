#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string &MyFunc(string &s, const string &prefix, const string &suffix) {
  s.insert(s.begin(), prefix.cbegin(), prefix.cend());
  s.append(suffix);
  return s;
}

int main()
{
  string s{"James"};
  string pre{"Mr."}, suf{"III"};
  s = MyFunc(s, pre, suf);
  cout << s << endl;
  return 0;
}
