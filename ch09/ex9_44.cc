#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void MyFunc(string &s, const string &oldVal, const string &newVal) {
  if(0 == oldVal.size()) return;
  for(size_t index = 0; index <= s.size() - oldVal.size(); ) 
    if(s[index] == oldVal[0] && s.substr(index, oldVal.size()) == oldVal) {
      s.replace(index, oldVal.size(), newVal);
      index += newVal.size();
    } else {
      ++index;
    }
}

int main()
{
  string s{"To test tho and thru..."};
  MyFunc(s, "tho", "though");
  cout << "First replace: " << s << endl;
  MyFunc(s, "thru", "through");
  cout << "Second replace: " << s << endl;
  return 0;
}
