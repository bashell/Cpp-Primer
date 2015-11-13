#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> svec;
    string s;

    cout << "Input some strings:\n";
    while(getline(cin, s))
        svec.push_back(s);
    cout << "The result:\n";
    for(auto s : svec)
        cout << s << endl;
    return 0;
}
