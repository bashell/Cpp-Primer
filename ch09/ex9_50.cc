#include <iostream>
#include <string>
#include <vector>

using std::endl;
using std::cout;
using std::string;
using std::vector;

/*
int main()
{
  vector<string> svec{"12", "23", "45", "100"};
  long result = 0;
  for(auto s : svec) 
    result += stol(s);
  cout << result << endl;
  return 0;
}
*/

int main()
{
  vector<string> svec{"12", "23", "45", "100"};
  float result = 0.0;
  for(auto s : svec) 
    result += stof(s);
  cout << result << endl;
  return 0;
}
