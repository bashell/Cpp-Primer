#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::multimap;
using std::string;

int main()
{
  multimap<string, string> authors;
  authors.insert({"Barth, John", "Sot-Weed Factor"});
  authors.insert({"Barth, John", "Lost in the Funhouse"});
  authors.insert({"DEF", "GHI"});
  for(auto found = authors.find("Barth, John"); found != authors.end(); ++found)
    if(found -> second == "Lost in the Funhouse") {
      authors.erase(found);
      break;
    }
  for(const auto & au: authors)
    cout << au.first << " " << au.second << endl;
  return 0;
}
