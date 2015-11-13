#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/*
int main()
{
    string s, res;
    while(cin >> s)
        res += s;
    cout << "The result:\n" << res << endl;
    return 0;
}
*/

int main()
{
    string s, res;
    while(cin >> s) {
        if(!res.size())
            res += s;
        else
            res += " " + s;
    }
    cout << "The result:\n" << res << endl;
    return 0;
}
