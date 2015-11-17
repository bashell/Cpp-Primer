#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void MySwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    cout << "Input two numbers: ";
    cin >> x >> y;
    cout << "Before: " << x << " " << y << endl;
    MySwap(&x, &y);
    cout << "After: " << x << " " << y << endl;
    return 0;
}
