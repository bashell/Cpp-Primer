#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  vector<int> ivec;
  for(auto i : ia)
    ivec.push_back(i);
  list<int> ilst(ivec.begin(), ivec.end());

  for(auto iter = ivec.begin(); iter != ivec.end(); )
    if(*iter % 2 == 0)
      iter = ivec.erase(iter);
    else
      ++iter;
  for(auto iter = ilst.begin(); iter != ilst.end(); )
    if(*iter % 2 == 1)
      iter = ilst.erase(iter);
    else
      ++iter;

  cout << "vector: ";
  for(auto i : ivec)
    cout << i << " ";
  cout << endl;
  
  cout << "list: ";
  for(auto i : ilst)
    cout << i << " ";
  cout << endl;
  
  return 0;
}
