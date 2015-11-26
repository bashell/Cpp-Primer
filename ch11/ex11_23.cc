#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::multimap;
using std::vector;
using std::string;

void AddChild(multimap<string, string> &families, const string &family, const string &child) {
  families.insert({family, child});
}

int main()
{
  multimap<string, string> families;
  AddChild(families, "A", "aa");
  AddChild(families, "A", "aaa");
  AddChild(families, "A", "aaaa");
  AddChild(families, "B", "bb");
  AddChild(families, "B", "bbbbb");
  AddChild(families, "C", "cccc");
  for(const auto &f : families) 
    cout << f.first << " " << f.second << endl;;
  return 0;
}
