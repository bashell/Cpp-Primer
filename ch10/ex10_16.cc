#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout; 
using std::endl;
using std::vector;
using std::string;
using std::stable_sort; 
using std::find_if;
using std::sort;
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
  auto wc = find_if(words.begin(), words.end(),
                    [sz] (const string &a)
                      { return a.size() >= sz; });
  for_each(wc, words.end(),
        [] (const string &s) { cout << s << " "; });
  cout << endl;
}

int main()
{
  vector<string> words{"aa", "aaa", "aaaa", "aaaaa", "abcdefghi"};
  biggies(words, 4);
  return 0;
}
