#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::string;
using std::pair;

void AddFamily(map<string, vector<pair<string, string>>> &families, const string &family) {
  families[family];
}

void AddChild(map<string, vector<pair<string, string>>> &families, const string &family, const string &child, const string &birthday) {
  families[family].push_back(make_pair(child, birthday));
}

int main()
{
  map<string, vector<pair<string, string>>> families;
  AddFamily(families, "A");
  AddChild(families, "A", "aa", "1990-1-1");
  AddChild(families, "A", "aaa", "1991-2-2");
  AddChild(families, "A", "aaaa", "1993-3-3");
  AddFamily(families, "B");
  AddChild(families, "B", "bb", "2001-1-1");
  AddChild(families, "B", "bbbbb", "2002-2-2");
  AddFamily(families, "C");
  AddChild(families, "C", "cccc", "1998-8-8");
  for(const auto &f : families) {
    cout << endl << "Familiy: " << f.first << endl;;
    cout << "Children: " << endl;
    for(const auto &c : f.second) {
      cout << c.first << " " << c.second << endl;;
    }
  }
  return 0;
}
