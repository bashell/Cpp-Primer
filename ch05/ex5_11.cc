#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned spCnt = 0, tabCnt = 0, nlCnt = 0;
    char ch;
    
    // we should use "cin.get(ch)", not just "cin >> ch", using which would ignore what we want to cout.
    while(cin.get(ch)) {
        switch(ch) {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++nlCnt;
                break;
        }
    }
    cout << "a/A\t" << aCnt << endl;
    cout << "e/E\t" << eCnt << endl;
    cout << "i/I\t" << iCnt << endl;
    cout << "o/O\t" << oCnt << endl;
    cout << "u/U\t" << uCnt << endl;
    cout << "sp\t" << spCnt << endl;
    cout << "tab\t" << tabCnt << endl;
    cout << "nl\t" << nlCnt << endl;
    return 0;
}
