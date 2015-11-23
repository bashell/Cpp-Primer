#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
  string numbers{"123456789"};
  string alph{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string s{"ab2c3d7R4E6"};
  cout << "numbers: ";
  for(int pos = 0; (pos = s.find_first_of(numbers, pos)) != string::npos; ++pos)
    cout << s[pos] << " ";
  cout << "\nalphabets: ";
  for(int pos = 0; (pos = s.find_first_of(alph, pos)) != string::npos; ++pos)
    cout << s[pos] << " ";
  cout << endl;
  return 0;
}
