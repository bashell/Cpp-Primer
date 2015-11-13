#include <iostream>

int main()
{
    int tmp;
    long res = 0;
    while(std::cin >> tmp) {
        res += tmp;
    }
    std::cout << "Sum is " << res << std::endl;
    return 0;
}
