#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;
using std::cerr;

void MyFunc(vector<string> &svec, const string &ifile) {
  string str;
  ifstream input(ifile);
  if(input) {
    while(input >> str)
      svec.push_back(str);
    input.close();
  } else {
    cerr << "couldn't open file: " + ifile << endl;;
  }
}

int main(int argc, char *argv[])
{
  vector<string> svec;
  if(argc == 2) {
    MyFunc(svec, argv[1]);
    for(auto s : svec)
      cout << s << endl;
  } else {
    cerr << "we need exactly one test file!" << endl;;
  }
  return 0;
}
