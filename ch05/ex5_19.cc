#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    do {
        string s1, s2;        
        cout << "Input two string: " << endl;
        cin >> s1 >> s2;
        if(s1.size() < s2.size())
            cout << "The shorter one:\n" << s1 << endl;
        else if(s2.size() < s1.size())
            cout << "The shorter one:\n" << s2 << endl;
        else 
            cout << "They have the same length" << endl;
    } while(cin);
    return 0;
}
