#include <iostream>

int main()
{
    int a, b, i;
    std::cout << "Input a and b: ";
    std::cin >> a >> b;
    if(a < b) {
        i = a;
        while(i <= b) {
            std::cout << i << std::endl;
            ++i;
        }
    } else {
        i = b;
        while(i <= a) {
            std::cout << i << std::endl;
            ++i;
        }
    }
    return 0;
}
