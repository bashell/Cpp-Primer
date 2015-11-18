#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;

istream &MyFunc(istream &is) {
  string str;
  while(is >> str)
    cout << str << endl;
  is.clear();
  return is;
}

int main()
{
  istream &is = MyFunc(cin);
  cout << is.rdstate() << endl;
  return 0;
}
