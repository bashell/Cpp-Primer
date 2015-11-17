#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Exchange the contents they are pointing to
void MyPtrExchange1(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Exchange the contents of themselves
void MyPtrExchange2(int *&a, int *&b) {
    int *tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 1, b = 2;
    cout << "Before: a = " << a << " b = " << b << endl;
    MyPtrExchange1(&a, &b);
    cout << "After using the first function, a = " << a << " b = " << b << endl;
    int c = 3, d = 4;
    int *p = &c, *q = &d;
    cout << "Before:\nthe address of c: " << p << "\nthe address of d: " << q << endl;
    MyPtrExchange2(p, q);
    cout << "After using the second function,\nthe address of c: " << p << "\nthe address of d: " << q << endl;
    return 0;
}
