#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;
using std::accumulate;

int main()
{
  vector<double> dvec{1.0, 2.1, 3.2};
  double sum1 = accumulate(dvec.cbegin(), dvec.cend(), 0);
  cout << sum1 << endl;
  double sum2 = accumulate(dvec.cbegin(), dvec.cend(), 0.0);
  cout << sum2 << endl;
  return 0;
}
