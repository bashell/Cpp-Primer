/*
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string s1, s2;
    
    cout << "Input two strings:\n";
    cin >> s1 >> s2;
    if(s1 > s2)
        cout << "The first one is larger." << endl;
    else if(s1 < s2)
        cout << "The second one is larger." << endl;
    else
        cout << "They are equal." << endl;
    return 0;
}
*/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char s1[20], s2[20];
    cout << "Input two strings:\n";
    cin >> s1 >> s2;
    auto comp = strcmp(s1, s2);
    if(comp > 0)
        cout << "The first one is larger." << endl;
    else if(comp < 0)
        cout << "The second one is larger." << endl;
    else
        cout << "They are equal." << endl;
    return 0;
}
