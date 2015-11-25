#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

int main()
{
  map<string, size_t> word_count;
  string word;
  while(cin >> word)
    ++word_count[word];
  for(const auto &wd : word_count)
    cout << wd.first << " occurs " << wd.second << ((wd.second > 1) ? " times" : " time") << endl;
  return 0;
}
