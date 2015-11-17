#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int MyFact(int val) {
    int ret = 1;
    while(val > 1)
        ret *= val--;
    return ret;
}

int main()
{
    int val;

    cout << "Input a integer: " << endl;
    cin >> val;
    cout << "The factorial of " << val << " is " << MyFact(val) << endl;
    return 0;
}
