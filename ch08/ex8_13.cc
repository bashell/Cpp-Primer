#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::cerr; using std::vector; using std::string; 
using std::istringstream; using std::ostringstream; 
using std::ifstream; using std::isdigit;

struct PersonInfo{
  string name;
  vector<string> phones;
};

bool valid(const string &s) {
  return isdigit(s[0]);
}

string format(const string &str) {
  return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main(int argc, char *argv[])
{
  string line, word;
  vector<PersonInfo> people;
  istringstream record;

  if(argc != 2) {
    cerr << "We need exactly one test file!" << endl;
    return -1;
  }
  ifstream in(argv[1]);
  if(!in) {
    cerr << "Can't open file: " + static_cast<string>(argv[1]) << endl;
    return -1;
  }

  while(getline(in, line)) {
    PersonInfo info;
    record.clear();
    record.str(line);
    while(record >> word)
      info.phones.push_back(word);
    people.push_back(info);
  }

  for(const auto &entry : people) {
    ostringstream formatted, badNums;
    for(const auto &nums : entry.phones)
      if(!valid(nums)) {
        badNums << " " << nums;
      } else {
        formatted << " " << format(nums);
      }
    if(badNums.str().empty())
      cout << entry.name << " " << formatted.str() << endl;
    else
      cerr << "input error: " << entry.name << " invalid number(s) " << badNums.str() << endl;      
  }

  return 0;
}
