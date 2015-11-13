#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    cout << "Input a string:\n";
    getline(cin, s);
    for(auto &c : s)
        c = 'X';
    cout << "After convertion:\n" << s << endl;
    return 0;
}
