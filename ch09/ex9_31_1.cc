#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::list;
using std::advance;

int main()
{
  list<int> ilst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for(auto iter = ilst.begin(); iter != ilst.end(); ) {
    if(*iter & 0x1) {
      iter = ilst.insert(iter, *iter);
      advance(iter, 2);
    } else {
      iter = ilst.erase(iter);
    }
  }
  for(auto i : ilst)
    cout << i << " ";
  cout << endl;
  return 0;
}
