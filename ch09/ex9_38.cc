#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
  string s;
  for(vector<string> svec; cin >> s; ) {
    svec.push_back(s);
    cout << "size: " << svec.size() << "\tcapacity: " << s.capacity() << endl;
  }
  return 0;
}
