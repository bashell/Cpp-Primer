#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main()
{
    int ia[] = {1, 2, 3, 4, 5};
    cout << "Before:\n";
    for(auto i : ia)
        cout << i << " ";
    cout << endl;
    for(int *ptr = begin(ia); ptr != end(ia); ++ptr)
        *ptr = 0;
    cout << "After:\n";
    for(auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
