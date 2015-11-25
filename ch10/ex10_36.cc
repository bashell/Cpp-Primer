#include <iostream>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::find;
using std::distance;

int main()
{
  list<int> ilst{1, 2, 3, 4, 5, 0, 6, 7, 0, 9, 10};
  auto my_find = find(ilst.crbegin(), ilst.crend(), 0);
  cout << "The distance between the last zero and the first element is " << distance(my_find, ilst.crend()) << endl;
  return 0;
}
