#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


vector<int>::iterator FindValue(vector<int>::iterator beg, vector<int>::iterator end, const int val) {
  for(; beg != end; ++beg)
    if(*beg == val)
      return beg;
  return end;
}

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5};
  vector<int>::iterator flag = ivec.end();
  flag = FindValue(ivec.begin(), ivec.end(), 4);
  if(ivec.end() == flag)
    cout << "Not found." << endl;
  else
    cout << "Find the element: " << *flag << endl;
  return 0;
}
