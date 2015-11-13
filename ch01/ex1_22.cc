#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, trans;
    std::cout << "Input several record with the same ISBN: " << std::endl;
    if(std::cin >> sum) {
        while(std::cin >> trans) {
            if(compareIsbn(sum, trans))  // ISBN相同
                sum += trans;
            else {
                std::cout << "Different ISBN" << std::endl;
                return -1;
            }
        }
        std::cout << "Result:\n" << sum << std::endl;
    } else {
        std::cout << "No input!" << std::endl;
        return -1;
    }
    return 0;
}
