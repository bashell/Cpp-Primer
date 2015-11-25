#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5};
  auto iter = ivec.cend();
  --iter;
  do {
    cout << *iter << " ";
  } while(iter != ivec.cbegin());
  cout << endl;
  return 0;
}
