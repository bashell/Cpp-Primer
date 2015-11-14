#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
    int n1, n2;
    
    cout << "Input two integers:" << endl;
    cin >> n1 >> n2;
    if(n2 == 0)
        throw runtime_error("the divisor must not be zero!");
    cout << "n1 / n2 = " << n1 / n2 << endl;
    return 0;
}
