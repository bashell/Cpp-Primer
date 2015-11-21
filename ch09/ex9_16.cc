#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
  list<int> lst = {1, 2, 3, 4};
  vector<int> ivec1 = {1, 2};
  vector<int> ivec2 = {1, 2, 3, 4};

  cout << (vector<int>(lst.begin(), lst.end()) == ivec1 ? "true" : "false") << endl;
  cout << (vector<int>(lst.begin(), lst.end()) == ivec2 ? "true" : "false") << endl;
  return 0;
}
