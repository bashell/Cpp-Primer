#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cout; 
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::unique;
using std::bind;
using namespace std::placeholders;

void elimDups(vector<string> &words) {
  sort(words.begin(), words.end());
  auto end_unique = unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}

bool check_size(const string &s, string::size_type sz) {
  return s.size() >= sz;
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
  elimDups(words);
  auto my_find = bind(check_size, _1, sz);
  for(const auto &wd : words)
    if(my_find(wd))
      cout << wd << " ";
  cout << endl;
}

int main()
{
  vector<string> words{"aa", "aaa", "aaaa", "aaaaa", "aaaaaaaaaa", "aa", "a"};
  biggies(words, 4);
  return 0;
}
