#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// 'while' version
/*
int main()
{
    string s;
    unsigned int index = 0;
    cout << "Input a string:\n";
    getline(cin, s);
    while(index < s.size()) {
        s[index] = 'X';
        ++index;
    }
    cout << "The result:\n" << s << endl;
    return 0;
}
*/

// 'traditional for' version
int main()
{
    string s;
    cout << "Input a string:\n";
    getline(cin, s);
    for(unsigned int index = 0; index < s.size(); ++index) 
        s[index] = 'X';
    cout << "The result:\n" << s << endl;
    return 0;
}
