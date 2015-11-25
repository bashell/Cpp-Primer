#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::string;

void AddFamily(map<string, vector<string>> &families, const string &family) {
  families[family];
}

void AddChild(map<string, vector<string>> &families, const string &family, const string &child) {
  families[family].push_back(child);
}

int main()
{
  map<string, vector<string>> families;
  AddFamily(families, "A");
  AddChild(families, "A", "aa");
  AddChild(families, "A", "aaa");
  AddChild(families, "A", "aaaa");
  AddFamily(families, "B");
  AddChild(families, "B", "bb");
  AddChild(families, "B", "bbbbb");
  AddFamily(families, "C");
  AddChild(families, "C", "cccc");
  for(const auto &f : families) {
    cout << "Familiy: " << f.first << endl;;
    cout << "Children: ";
    for(const auto &c : f.second) {
      cout << c << " ";
    }
    cout << endl;
  }
  return 0;
}
