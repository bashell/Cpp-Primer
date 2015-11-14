#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, pre_s;
    bool flag = true;

    while(cin >> s) {
        if(s == pre_s) {
            flag = false;
            cout << s << " appears in succession" << endl;
            break;
        }
        pre_s = s;
    }
    if(flag)
        cout << "No word appears in succession" << endl;
    return 0;
}
