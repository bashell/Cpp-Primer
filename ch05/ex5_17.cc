#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec1 = {0, 1, 1, 2};
    vector<int> ivec2 = {0, 1, 1, 2, 3, 5, 8};
    //vector<int> ivec3 = {3, 4, 7, 9, 10};
    //vector<int> ivec4 = {3, 4, 7, 9, 11, 12};

    auto iter1 = ivec1.cbegin(), iter2 = ivec2.cbegin();
    for( ; iter1 != ivec1.cend() && iter2 != ivec2.cend(); ++iter1, ++iter2) {
        if(*iter1 != *iter2) {
            cout << "There is no prefix relationships between ivec1 and ivec2" << endl;
            break;
        }
    }
    if(iter1 == ivec1.cend())
        cout << "ivec1 is a prefix of ivec2" << endl;
    if(iter2 == ivec2.cend())
        cout << "ivec2 is a prefix of ivec1" << endl;
    return 0;
}
