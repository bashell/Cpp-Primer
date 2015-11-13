#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> text;
    string s;

    cout << "Input a text:\n";
    while(getline(cin, s))
        text.push_back(s);
    cout << "The result:\n";
    for(auto it = text.begin(); it != text.end() && !it -> empty(); ++it) {
        for(auto it1 = it -> begin(); it1 != it -> end(); ++it1)
            *it1 = toupper(*it1);
        cout << *it << endl;
    }
}
