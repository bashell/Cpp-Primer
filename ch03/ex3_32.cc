#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    /* 
    constexpr size_t array_size = 10;
    int ia[array_size] = {};
    int ib[array_size] = {};
    for(size_t ix = 0; ix < array_size; ++ix)
        ia[ix] = ix;
    for(size_t ix = 0; ix < array_size; ++ix)
        ib[ix] = ia[ix];
    cout << "The result:\n";
    for(auto i : ib)
        cout << i << " ";
    cout << endl;
    return 0;
    */

    constexpr int array_size = 10;
    vector<int> ivec1, ivec2;
    for(int ix = 0; ix < array_size; ++ix)
        ivec1.push_back(ix);
    for(auto i : ivec1)
        ivec2.push_back(i);
    cout << "The result:\n";
    for(auto i : ivec2)
        cout << i << " ";
    cout << endl;
    return 0;
}
