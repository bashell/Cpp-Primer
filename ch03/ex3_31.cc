#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size] = {};
    for(size_t ix = 0; ix < array_size; ++ix)
        ia[ix] = ix;
    cout << "The elements of the array:\n";
    for(auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
