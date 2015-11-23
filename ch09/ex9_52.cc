#include <iostream>
#include <stack>
#include <string>

using std::endl;
using std::cout;
using std::stack;
using std::string;

int main()
{
  string expr{"This is (zzz)."};
  bool bSeen = false;
  stack<char> stk;
  for(auto s : expr) {
    if(s == '(') { bSeen = true; continue; }
    else if(s == ')') bSeen = false;
    
    if(bSeen) stk.push(s);
  }

  string repstr;
  while(!stk.empty()) {
    repstr += stk.top();
    stk.pop();
  }
  
  expr.replace(expr.find("(") + 1, repstr.size(), repstr);

  cout << expr << endl;
  return 0;
}
