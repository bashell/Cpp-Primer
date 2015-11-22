#include <iostream>
#include <forward_list>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::forward_list;

void MyFunc(forward_list<string> &flst, const string &s1, const string &s2) {
  bool flag = false;
  auto pre = flst.before_begin();
  auto cur = flst.begin();
  while(cur != flst.end()) {
    if(*cur == s1) {
      cur = flst.insert_after(cur, s2);
      flag = true;
    } else {
      pre = cur++;
    }
  }
  if(!flag) 
    flst.insert_after(pre, s2);
}

int main()
{
  forward_list<string> flst= {"abc", "def", "ghi", "jkl", "ghi", "mno"};
  string s1 = "ghi";
  string s2 = "zzz";
  MyFunc(flst, s1, s2);
  for(auto s : flst)
    cout << s << " ";
  cout << endl;
  return 0;
}
