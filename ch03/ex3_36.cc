#include <iostream>
#include <iterator>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

/*
int main()
{
    const int arr_size = 5;
    int num;
    int ia[arr_size] = {};
    int ib[arr_size] = {};

    cout << "Input 5 numbers for the first array:\n";
    for(int i = 0; i < arr_size; ++i) {
        cin >> num;
        ia[i] = num;
    }
    cout << "Input 5 numbers for the second array:\n";
    for(int i = 0; i < arr_size; ++i) {
        cin >> num;
        ib[i] = num;
    }

    int i = 0;
    for( ; i < arr_size; ++i) {
        if(ia[i] != ib[i]) {
            cout << "They are not equal!" << endl;
            break;
        }
    }
    if(i == arr_size)
        cout << "They are equal!" << endl;
    return 0;
}
*/
int main()
{
    vector<int> ivec1, ivec2;
    const int vec_size = 5;
    int num;

    cout << "Input 5 numbers for the first vector:\n";
    for(int i = 0; i < vec_size; ++i) {
        cin >> num;
        ivec1.push_back(num);
    }
    cout << "Input 5 numbers for the second vector:\n";
    for(int i = 0; i < vec_size; ++i) {
        cin >> num;
        ivec2.push_back(num);
    }

    auto iter1 = ivec1.cbegin(), iter2 = ivec2.cbegin();
    for( ; iter1 != ivec1.cend() && iter2 != ivec2.cend(); ++iter1, ++iter2) {
        if(*iter1 != *iter2) {
            cout << "They are not equal!" << endl;
            break;
        }
    }
    if(iter1 == ivec1.cend())
        cout << "They are equal!" << endl;
    return 0;
}
