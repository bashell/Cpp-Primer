#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  list<int> ilst(ivec.rbegin() + 3, ivec.rbegin() + 8);
  for(const auto &i : ilst)
    cout << i << " ";
  cout << endl;
  return 0;
}
