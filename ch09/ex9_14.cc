#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::endl;
using std::cout;
using std::list;
using std::vector;
using std::string;

int main()
{
  list<const char *> lst = {"Hello", "C++", "Primer", "5e"};
  vector<string> svec;
  svec.assign(lst.begin(), lst.end());  // assign

  for(auto s : svec)
    cout << s << endl;
  return 0;
}
