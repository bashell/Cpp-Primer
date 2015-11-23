#include <iostream>
#include <vector>
#include <string>

using std::endl;
using std::cout;
using std::vector;
using std::string;

int main()
{
  vector<char> cvec{'C', '+', '+', 'p', 'r', 'i', 'm', 'e', 'r'};
  string s(cvec.begin(), cvec.end());
  cout << s << endl;
  return 0;
}
