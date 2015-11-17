#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int MySum(int a, int b) {
    return a + b;
}

int MySub(int a, int b) {
    return a - b;
}

int MyMul(int a, int b) {
    return a * b;
}

int MyDiv(int a, int b) {
    return a / b;
}

void MyCompute(int a, int b, int (*comp)(int, int)) {
    cout << comp(a, b) << endl;
}

int main()
{
    decltype(MySum) *p1 = MySum;
    decltype(MySub) *p2 = MySub;
    decltype(MyMul) *p3 = MyMul;
    decltype(MyDiv) *p4 = MyDiv;
    int i = 12, j = 4;
    vector<decltype(MySum) *> vecFunc = {p1, p2, p3, p4};
    for(auto p : vecFunc)
        MyCompute(i, j, p);
    return 0;
}
