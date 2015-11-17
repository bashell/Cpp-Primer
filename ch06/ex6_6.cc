#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int MySum(int a1, int a2) {
    static unsigned cnt = 0;
    ++cnt;
    cout << "This function has been executed " << cnt << " times." << endl;
    return a1 + a2;
}

int main()
{
    int num1, num2;
    cout << "Input two numbers: ";
    while(cin >> num1 >> num2) {
        cout << num1 << " + " << num2 << " = " << MySum(num1, num2) << endl;
        cout << "Input two numbers: ";
    }
    return 0;
}
