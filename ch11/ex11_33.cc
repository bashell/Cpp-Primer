#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::ifstream;
using std::istringstream;
using std::cerr;

map<string, string> buildMap(ifstream &map_file) {
  map<string, string> trans_map;
  for(string key, value; map_file >> key && getline(map_file, value); )
    if(value.size() > 1)
      trans_map[key] = value.substr(1).substr(0, value.find_last_not_of(' '));
  return trans_map;
}

const string &transform(const string &s, const map<string, string> &m) {
  auto map_it = m.find(s);
  return map_it == m.cend() ? s : map_it->second;
}

void word_transform(ifstream &map_file, ifstream &input) {
  auto trans_map = buildMap(map_file);
  for(string text; getline(input, text); ) {
    istringstream iss(text);
    bool firstword = true;
    for(string word; iss >> word; ) {
      if(firstword)
        firstword = false;
      else
        cout << " ";
      cout << transform(word, trans_map);
    }
    cout << endl;
  }
}

int main(int argc, char *argv[])
{
  ifstream ifs_map(argv[1]), ifs_content(argv[2]);
  if(ifs_map && ifs_content)
    word_transform(ifs_map, ifs_content);
  else
    cerr << "can't find the documents." << endl;
  return 0;
}
