#include <vector>

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

int main()
{
    decltype(MySum) *p1 = MySum;
    decltype(MySub) *p2 = MySub;
    decltype(MyMul) *p3 = MyMul;
    decltype(MyDiv) *p4 = MyDiv;

    vector<decltype(MySum) *> vecFunc = {p1, p2, p2, p4};
    return 0;
}
