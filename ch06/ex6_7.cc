#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned MyCnt() {
    static unsigned cnt = -1;
    ++cnt;
    return cnt;
}

int main()
{
    char ch;
    cout << "Input a character and a carriage return each time: " << endl;
    while(cin >> ch)
        cout << "Times: " << MyCnt() << endl;
    return 0;
}
