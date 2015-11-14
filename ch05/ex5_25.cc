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
    while(cin >> n1 >> n2) {
        try {
            if(n2 == 0)
                throw runtime_error("The divison must not be zero!");
            cout << "n1 / n2 = " << n1 / n2 << endl;
        } catch(runtime_error err) {
            cout << err.what() << endl;
            cout << "Input again?(y or n) ";
            char ch;
            cin >> ch;
            if(ch != 'y' && ch != 'Y')
                break;
        }
    }
    return 0;
}
