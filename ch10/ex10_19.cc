#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout; 
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::stable_sort; 
using std::stable_partition;
using std::unique;

void elimDups(vector<string> &words) {
  sort(words.begin(), words.end());
  auto end_unique = unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
  elimDups(words);
  stable_sort(words.begin(), words.end(),
              [] (const string &a, const string &b)
                { return a.size() < b.size(); });
  auto wc = stable_partition(words.begin(), words.end(),
              [sz] (const string &s) { return s.size() >= sz; });
  for_each(words.begin(), wc,
        [] (const string &s) { cout << s << " "; });
  cout << endl;
}

int main()
{
  vector<string> words{"aa", "aaa", "aaaa", "aaaaa", "abcdefghi"};
  biggies(words, 4);
  return 0;
}
