#include <iostream>
#include <list>
#include <deque>

using std::cout;
using std::endl;
using std::list;
using std::deque;

int main()
{
  list<int> ilst = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  deque<int> ideq1, ideq2;
  for(auto iter = ilst.cbegin(); iter != ilst.cend(); ++iter)
    if(*iter % 2 != 0)
      ideq1.push_back(*iter);
    else
      ideq2.push_back(*iter);
  for(auto i : ideq1)
    cout << i << " ";
  cout << endl;
  for(auto i : ideq2)
    cout << i << " ";
  cout << endl;
  return 0;
}
