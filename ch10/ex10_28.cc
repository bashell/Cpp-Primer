#include <iostream>
#include <vector>
#include <deque>
#include <forward_list>
#include <list>
#include <algorithm>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::deque;
using std::forward_list;
using std::list;
using std::copy;
using std::back_inserter;
using std::front_inserter;
using std::inserter;

int main()
{
  vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  deque<int> ideq;
  vector<int> ivec2;
  list<int> ilst;
  
  copy(ivec.cbegin(), ivec.cend(), inserter(ideq, ideq.begin()));
  copy(ivec.cbegin(), ivec.cend(), back_inserter(ivec2));
  copy(ivec.cbegin(), ivec.cend(), front_inserter(ilst));
  
  for(const auto &i : ideq)
    cout << i << " ";
  cout << endl;
  for(const auto &i : ivec2)
    cout << i << " ";
  cout << endl;
  for(const auto &i : ilst)
    cout << i << " ";
  cout << endl;
  return 0;
}
