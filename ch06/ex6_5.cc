#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int MyAbs(int val) {
    return val < 0 ? -val : val;
}

int main()
{
    int val;
    
    cout << "Input a number: ";
    cin >> val;
    cout << "The absolute value of " << val << " is " << MyAbs(val) << endl;
    return 0;
}
