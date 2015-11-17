#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int MyCompare(const int a, const int *b) {
    return a > *b ? a : *b;
}

int main()
{
    int a, b;
    cout << "Input two numbers: ";
    cin >> a >> b;
    cout << "The larger one is: " << MyCompare(a, &b) << endl;
    return 0;
}
