#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::istream;
using std::string;
using std::istringstream;

istream &MyFunc(istream &is) {
  string str;
  while(is >> str)
    cout << str << endl;
  is.clear();
  return is;
}

int main()
{
  istringstream iss("Hello!");
  MyFunc(iss);
  return 0;
}
