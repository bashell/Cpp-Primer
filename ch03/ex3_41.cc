#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main()
{
    int ia[] = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ivec(begin(ia), end(ia));

    for(auto i : ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}
