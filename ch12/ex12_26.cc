#include <iostream>
#include <memory>
#include <string>

#define N 100

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::allocator;

int main()
{
  allocator<string> alloc;
  auto const p = alloc.allocate(N);
  string s;
  auto q = p;
  size_t sz = 0;
  while(cin >> s && q != p + N)
    alloc.construct(q++, s);
  while(q != p) {
    ++sz;
    --q;
    alloc.destroy(q);
  }
  alloc.deallocate(p, N);
  cout << sz << endl;
  return 0;
}
