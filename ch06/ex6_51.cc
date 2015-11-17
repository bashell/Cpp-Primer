#include <iostream>

using std::cout;
using std::endl;

void f() {
    cout << "No arguments!" << endl;
}

void f(int) {
    cout << "Only one integer argument!" << endl;
}

void f(int, int) {
    cout << "Two integer argument!" << endl;
}

void f(double , double = 3.14) {
    cout << "Two double argument!" << endl;
}

int main()
{
    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}
