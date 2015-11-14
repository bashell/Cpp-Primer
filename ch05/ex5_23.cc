#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n1, n2;
    
    cout << "Input two integers:" << endl;
    cin >> n1 >> n2;
    if(n2 == 0) {
        cout << "The divisor must not be zero!" << endl;
        return -1;
    }
    cout << "n1 / n2 = " << n1 / n2 << endl;
    return 0;
}
