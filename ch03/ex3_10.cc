#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, res;
    cout << "Input a string with punctuation characters:\n";
    getline(cin, s);
    for(auto c : s)
        if(!ispunct(c))
            res += c;
    cout << "The result:\n" << res << endl;
    return 0;
}
