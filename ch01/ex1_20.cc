#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item book;
    std::cout << "Input record: " << std::endl;
    while(std::cin >> book) {
        std:: cout << "Detailed information:\n" << book << std::endl;
    }
    return 0;
}
