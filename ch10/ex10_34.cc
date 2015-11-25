#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5};
  for(auto riter = ivec.crbegin(); riter != ivec.crend(); ++riter)
    cout << *riter << " ";
  cout << endl;
  return 0;
}
