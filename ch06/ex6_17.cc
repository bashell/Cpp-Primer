#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool HasUpper(const string &s) {
    for(auto ch : s)
        if(isupper(ch))
            return true;
    return false;
}

void MyToUpper(string &s) {
    for(auto &ch : s)
        ch = tolower(ch);
}

int main()
{
    string s;
    cout << "Input a string:" << endl;
    cin >> s;
    if(HasUpper(s)) {
        MyToUpper(s);
        cout << "After change: " << s << endl;
    } else {
        cout << "There is no upper letter in string" << s << endl;
    }
    return 0;
}
