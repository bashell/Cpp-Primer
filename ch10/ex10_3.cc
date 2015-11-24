#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;
using std::accumulate;

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = accumulate(ivec.cbegin(), ivec.cend(), 0);
  cout << "Sum is: " << sum << endl;
  return 0;
}
