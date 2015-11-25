#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::remove_if;
using std::erase;

string &strip(string &str) {
  for(auto &c : str)
    c = tolower(c);
  str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
  return str;
}

int main()
{
  map<string, size_t> word_count;
  string word;
  while(cin >> word) {
    word = strip(word);
    ++word_count[word];
  }
  for(const auto &wd : word_count)
    cout << wd.first << " occurs " << wd.second << ((wd.second > 1) ? " times" : " time") << endl;
  return 0;
}
