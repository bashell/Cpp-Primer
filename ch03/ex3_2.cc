#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// read a line each time
/*
int main()
{
    string line;
    while(getline(cin, line)) {
        cout << line << endl;
    }
    return 0;
}
*/

// read a word each time
int main()
{
    string word;
    while(cin >> word) {
        cout << word << endl;
    }
    return 0;
}
