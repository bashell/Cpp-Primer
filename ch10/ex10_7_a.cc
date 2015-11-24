#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::copy;
using std::back_inserter;

int main()
{
  vector<int> vec;
  list<int> lst;
  int i;
  while(cin >> i)
    lst.push_back(i);

  // Solution1
  // vec.resize(lst.size());
  // copy(lst.cbegin(), lst.cend(), vec.begin());

  // Solution2
  copy(lst.cbegin(), lst.cend(), back_inserter(vec));
  for(auto i : vec)
    cout << i << " ";
  cout << endl;
  return 0;
}
