#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void MyReset(int &i) {
    i = 0;
}

int main()
{
    int a;
    cout << "Input a number: ";
    cin >> a;
    cout << "Before: " << a << endl;
    MyReset(a);
    cout << "After: " << a << endl;
    return 0;
}
