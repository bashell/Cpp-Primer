#include <iostream>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::unordered_map;
using std::ifstream;
using std::istringstream;
using std::cerr;

/*
int main() 
{
  unordered_map<string, size_t> word_count;
  for(string word; cin >> word; ++word_count[word]) ;
  for(const auto &wd : word_count)
    cout << wd.first << " occurs " << wd.second << (wd.second > 1 ? " times" : " time") << endl;
}
*/

int main(int argc, char *argv[])
{
  ifstream ifs_map(argv[1]), ifs_content(argv[2]);
  if(!ifs_map || !ifs_content) {
    cerr << "can't find the documents." << endl;
    return -1;
  }
  unordered_map<string, string> trans_map;
  for(string key, value; ifs_map >> key && getline(ifs_map, value); )
    if(value.size() > 1)
      trans_map[key] = value.substr(1).substr(0, value.find_last_not_of(' '));
  for(string text, word; getline(ifs_content, text); cout << endl)
    for(istringstream iss(text); iss >> word; ) {
      auto map_it = trans_map.find(word);
      cout << (map_it == trans_map.cend() ? word : map_it->second) << " ";
    }

  return 0;
}
