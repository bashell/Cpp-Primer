#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::cerr;

void FindLongest(ifstream &in) {
  string s, longest_wd;
  int max_len = 0;
  cout << "Satified words:" << endl;
  while(in >> s) {
    if(s.find_first_of("bdfghijklpqty") != string::npos)
      continue; 
    cout << s << endl;
    if(max_len < s.size()) {
      max_len = s.size();
      longest_wd = s;
    }
  }
  cout << "\nLongest word is: " << longest_wd << endl;
}


int main(int argc, char *argv[])
{
  ifstream in(argv[1]);
  if(!in) {
    cerr << "Can't open file " + string(argv[1]) << endl;
    return -1;
  }
  FindLongest(in);
  return 0;
}
