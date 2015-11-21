#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool FindValue(vector<int>::iterator beg, vector<int>::iterator end, const int val) {
  for(; beg != end; ++beg)
    if(*beg == val)
      return true;
  return false;
}

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5};
  bool flag;
  flag = FindValue(ivec.begin(), ivec.end(), 10);
  cout << flag << endl;
  flag = FindValue(ivec.begin(), ivec.end(), 3);
  cout << flag << endl;
  return 0;
}
