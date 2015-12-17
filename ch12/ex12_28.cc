#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::shared_ptr;
using std::map;
using std::set;
using std::vector;
using std::string;

int main()
{
  ifstream file("data/storyDataFile");
  vector<string> input;
  map<string, set<decltype(input.size())>> dict;
  decltype(input.size()) lineNo{0};
  for(string line; std::getline(file, line); ++lineNo) {
    input.push_back(line);
    istringstream line_stream(line);
    for(string text, word; line_stream >> text; word.clear()) {
      std::remove_copy_if(text.begin(), text.end(), std::back_inserter(word), ispunct);
      dict[word].insert(lineNo);
    }
  }
  while(true) {
    cout << "enter word to look for, or q to quit: ";
    string s;
    if(!(cin >> s) || s == "q") break;
    auto found = dict.find(s);
    if(found != dict.end()) {
      cout << s << " occurs " << found->second.size() << (found->second.size() > 1 ? " times" : " time");
      for(auto i : found->second)
        cout << "\t(line " << i+1 << ") " << input.at(i) << endl;
    } else {
      cout << s << " occurs 0 time" << endl;
    }
  }
  return 0;
}
