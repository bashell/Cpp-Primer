#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


void MyFunc(string &s, const string &oldVal, const string &newVal) {
  if(oldVal.size() == 0 || s.size() < oldVal.size()) return;
  for(auto pos = s.begin(); pos <= s.end() - oldVal.size(); ) {
    auto iter1 = pos;
    auto iter2 = oldVal.begin();
    while(iter2 != oldVal.end() && *iter1 == *iter2) 
      ++iter1, ++iter2;
    if(iter2 == oldVal.end()) {  // find a matched string
      pos = s.erase(pos, iter1);
      if(newVal.size() > 0) { 
        iter2 = newVal.end();
        do {
          --iter2;
          pos = s.insert(pos, *iter2);
        } while(iter2 > newVal.begin());
      } 
      pos += newVal.size();
    } else {
      ++pos;
    }
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
