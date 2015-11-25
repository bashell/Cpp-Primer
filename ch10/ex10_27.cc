#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::unique_copy;
using std::back_inserter;

int main()
{
  vector<int> ivec{1, 1, 1, 2, 3, 3, 4, 5};
  list<int> ilst;
  unique_copy(ivec.cbegin(), ivec.cend(), back_inserter(ilst));
  for(const auto &i : ilst)
    cout << i << " ";
  cout << endl;
  return 0;
}
