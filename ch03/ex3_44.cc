#include <iostream>

using std::cout;
using std::endl;
using int_array = int[4];

int main()
{
    int ia[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    // version1
    /*
    for(int_array &row : ia) {
        for(int col : row)
            cout << col << " ";
        cout << endl;
    }
    */

    // version2
    /*
    for(size_t i = 0; i != 3; ++i) {
        for(size_t j = 0; j != 4; ++j)
            cout << ia[i][j] << " ";
        cout << endl;
    }
    */

    // version3
    for(int_array *p = ia; p != ia + 3; ++p) {
        for(int *q = *p; q != *p + 4; ++q)
            cout << *q << " ";
        cout << endl;
    }

    return 0;
}
