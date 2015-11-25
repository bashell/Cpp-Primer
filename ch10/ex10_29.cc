#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::vector;
using std::string;
using std::istream_iterator;

int main(int argc, char *argv[])
{
  ifstream in(argv[1]);
  vector<string> svec;
  istream_iterator<string> str_it(in), eof;
  while(str_it != eof)
    svec.push_back(*str_it++);
  for(const auto &s : svec)
    cout << s << " ";
  cout << endl;
  return 0;
}
