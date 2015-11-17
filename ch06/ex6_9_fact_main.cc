// factMain.cc
#include <iostream>
#include "ex6_8.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int val;

    cout << "Input a integer: " << endl;
    cin >> val;
    cout << "The factorial of " << val << " is " << MyFact(val) << endl;
    return 0;
}
