#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::fill_n;
using std::back_inserter;

int main()
{
  vector<int> vec;

  // Solution1
  //vec.resize(10);
  //fill_n(vec.begin(), 10, 0);

  // Solution2
  vec.reserve(10);
  fill_n(back_inserter(vec), 10, 0);

  for(auto i : vec)
    cout << i << " ";
  cout << endl;
  return 0;
}
