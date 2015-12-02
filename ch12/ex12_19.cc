#include <iostream>
#include "ex12_19.h"

using std::cout;
using std::endl;

int main()
{
  StrBlob csb{"aaaaaa", "bbbbbb", "cccccc"};
  for(auto it = csb.begin(); it != csb.end(); it.incr())
    cout << it.deref() << endl;
  return 0;
}
