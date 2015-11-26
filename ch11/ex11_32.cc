#include <iostream>
#include <map>
#include <set>
#include <string>

using std::cout;
using std::endl;
using std::map;
using std::multimap;
using std::multiset;
using std::string;

int main()
{
  multimap<string, string> authors;
  authors.insert({"B", "fgh"});
  authors.insert({"B", "opq"});
  authors.insert({"B", "abc"});
  authors.insert({"A", "bcd"});
  authors.insert({"A", "efg"});
  authors.insert({"A", "abc"});
  map<string, multiset<string>> ordered_authors;
  for(const auto &au : authors)
    ordered_authors[au.first].insert(au.second);
  for(const auto &au : ordered_authors) {
    cout << au.first << " : ";
    for(const auto &wk : au.second)
      cout << wk << " ";
    cout << endl;
  }
  return 0;
}
