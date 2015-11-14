#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, pre_ch;
    
    while(cin >> ch) {
        bool flag = 0;  // the pre_ch is not used
        if(pre_ch == 'f') {
            switch(ch) {
                case 'f':
                    ++ffCnt;
                    flag = 1;  // the pre_ch is used
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;
            }
        }
        if(flag)
            flag = 0;  // reset flag
        else
            pre_ch = ch;
    }
    cout << "ff:\t" << ffCnt << endl;
    cout << "fl:\t" << flCnt << endl;
    cout << "fi:\t" << fiCnt << endl;
    return 0;
}
