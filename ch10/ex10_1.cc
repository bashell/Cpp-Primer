#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::count;

int main()
{
  vector<int> ivec{1, 1, 1, 2, 3, 4, 5};
  cout << count(ivec.begin(), ivec.end(), 1) << endl;
  return 0;
}
