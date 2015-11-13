#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item trans1, trans2;
    std::cout << "Input two records which have the same ISBN:" << std::endl;
    std::cin >> trans1 >> trans2;
    if(compareIsbn(trans1, trans2))
        std::cout << "Detailed information:\n" << trans1 + trans2 << std::endl;
    else
        std::cout << "The two ISBN are different!" << std::endl;
    return 0;
}
