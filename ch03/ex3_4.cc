#include <iostream>
#include <string>

using std::cin; 
using std::cout; 
using std::endl;
using std::string;

/*
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1 == s2)
        cout << "They are equal!" << endl;
    else if(s1 > s2)
        cout << "The larger one:\n" << s1 << endl;
    else
        cout << "The larger one:\n" << s2 << endl;
    return 0;
}
*/

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() == s2.size())
        cout << "They have the same length!" << endl;
    else if(s1.size() > s2.size())
        cout << "The longer one:\n" << s1 << endl;
    else
        cout << "The longer one:\n" << s2 << endl;
    return 0;
}
