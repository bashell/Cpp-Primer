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
    vector<string> svec;
    string word;
    
    cout << "Input some words:\n";
    while(cin >> word)
        svec.push_back(word);
    for(auto &w : svec)
        for(auto &c : w)
            c = toupper(c);
    cout << "After convertion:\n";
    for(auto w : svec)
        cout << w << endl;
    return 0;
}
