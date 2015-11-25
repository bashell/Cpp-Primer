#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;
using std::copy;
using std::istream_iterator;
using std::ostream_iterator;

int main()
{
  istream_iterator<int> in_iter(cin), eof;
  ostream_iterator<int> out_iter(cout, " ");
  vector<int> ivec(in_iter, eof);
  sort(ivec.begin(), ivec.end());
  copy(ivec.begin(), ivec.end(), out_iter);
  cout << endl;
  return 0;
}
