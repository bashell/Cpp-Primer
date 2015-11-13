#include <iostream>

int main()
{
    int i = 50, res = 0; 
    while(i <= 100) {
        res += i;
        ++i;
    }
    std::cout << "The result is " << res << std::endl;
    return 0;
}
