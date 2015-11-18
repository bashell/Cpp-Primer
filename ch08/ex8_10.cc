#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using std::vector;
using std::ifstream;
using std::istringstream;
using std::string;
using std::cout;
using std::endl;
using std::cerr;

int main(int argc, char *argv[])
{
  if(argc == 2) {
    vector<string> svec;
    ifstream in(argv[1]);
    string s;
    while(getline(in, s))
      svec.push_back(s);

    for(auto s : svec) {
      istringstream record(s);
      string word;
      while(record >> word)
        cout << word << endl;
    }
  } else {
    cerr << "We need exactly one test file!" << endl;
  }
  return 0;
}
