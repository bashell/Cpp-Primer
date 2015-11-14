#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, pre_s, max_s;
    int cur_cnt = 1, max_cnt = 0;

    while(cin >> s) {
        if(s == pre_s) {
            ++cur_cnt;
            if(cur_cnt > max_cnt) {
                max_cnt = cur_cnt;
                max_s = s;
            }
        } else {
            cur_cnt = 1;
        }
        pre_s = s;
    }
    if(max_cnt > 1) {
        cout << "The string appearing most times is: " << max_s << endl;
        cout << "Times: " << max_cnt << endl;
    } else {
        cout << "No word appears in succession." << endl;
    }
    
    return 0;
}
