#include <iostream>
#include <string>
#include <vector>
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::pair;

int main()
{
  vector<pair<string, int>> pvec;
  string str;
  int n;
  while(cin >> str >> n)
    pvec.push_back(make_pair(str, n));
  for(const auto &p : pvec)
    cout << p.first << " " << p.second << endl;
  return 0;
}
