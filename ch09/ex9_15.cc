#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<int> ivec1 = {1, 2, 3, 4};
  vector<int> ivec2 = {1, 2, 3, 4};
  vector<int> ivec3 = {1, 2};
  vector<int> ivec4 = {1, 3, 7};

  cout << (ivec1 == ivec2 ? "true" : "false") << endl;
  cout << (ivec1 == ivec3 ? "true" : "false") << endl;
  cout << (ivec1 != ivec4 ? "true" : "false") << endl;
  return 0;
}
