#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto begin = vi.begin();
  while(begin != vi.end()) {
    ++begin;
    vi.insert(begin, 42);  // This will cause: Aborted (core dumped)
    ++begin;
  }
  for(auto i : vi)
    cout << i << " ";
  cout << endl;
  return 0;
}
