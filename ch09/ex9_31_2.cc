#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;
using std::advance;

int main()
{
  forward_list<int> iflst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for(auto pre = iflst.before_begin(), cur = iflst.begin(); 
      cur != iflst.end(); ) {
    if(*cur & 0x1) {  // element is odd ==> copy
      cur = iflst.insert_after(pre, *cur);
      advance(pre, 2);
      advance(cur, 2);
    } else {  // element is even ==> delete
      cur = iflst.erase_after(pre);
    }
  }
  for(auto i : iflst)
    cout << i << " ";
  cout << endl;
  return 0;
}
