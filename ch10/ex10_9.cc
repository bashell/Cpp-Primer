#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::unique;

void elimDups(vector<string> &words) {
  sort(words.begin(), words.end());
  auto end_unique = unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
  for(const auto &s : words)
    cout << s << " ";
  cout << endl;
}

int main()
{
  vector<string> words{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
  elimDups(words);
  return 0;
}
