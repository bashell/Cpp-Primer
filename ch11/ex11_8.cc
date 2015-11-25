#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::find;

int main()
{
  vector<string> uni_words;
  string word;
  while(cin >> word) {
    if(find(uni_words.begin(), uni_words.end(), word) == uni_words.end())
      uni_words.push_back(word);
  }
  for(const auto &wd : uni_words)
    cout << wd << " ";
  cout << endl;
  return 0;
}
