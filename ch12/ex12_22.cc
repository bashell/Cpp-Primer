#include <iostream>
#include "ex12_22.h"

using std::cout;
using std::endl;

int main()
{
  const StrBlob csb{"aaaaaa", "bbbbbb", "cccccc"};
  for(auto it = csb.begin(); it != csb.end(); it.incr())
    cout << it.deref() << endl;
  return 0;
}
