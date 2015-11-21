#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
  list<int> ilst = {1, 2, 3};
  vector<int> ivec = {4, 5, 6};
  vector<double> dvec1(ilst.begin(), ilst.end());
  vector<double> dvec2(ivec.begin(), ivec.end());
  for(auto d : dvec1)
    cout << d << " ";
  cout << endl;
  for(auto d : dvec2)
    cout << d << " ";
  cout << endl;
  return 0;
}
