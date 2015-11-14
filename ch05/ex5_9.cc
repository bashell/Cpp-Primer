#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while(cin >> ch) {
        if(ch == 'a')
            ++aCnt;
        if(ch == 'e')
            ++eCnt;
        if(ch == 'i')
            ++iCnt;
        if(ch == 'o')
            ++oCnt;
        if(ch == 'u')
            ++uCnt;
    }
    cout << "a\t" << aCnt << endl;
    cout << "e\t" << eCnt << endl;
    cout << "i\t" << iCnt << endl;
    cout << "o\t" << oCnt << endl;
    cout << "u\t" << uCnt << endl;
    return 0;
}
