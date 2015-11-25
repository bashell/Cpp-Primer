#include <iostream>
#include <string>
#include <vector>
#include <functional>

using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::bind;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz) {
  return s.size() >= sz;
}

int main()
{
  vector<int> ivec{1, 3, 5, 7, 9, 11, 13, 15};
  string s{"abcdefg"};
  auto my_find = bind(check_size, s, _1);
  bool flag = false;

  for(const auto &i : ivec)
    if(!my_find(i)) {
      cout << "Find :" << i << endl;
      flag = true;
      break;
    }
  if(!flag)
    cout << "Not Find!" << endl; 
  return 0;
}
