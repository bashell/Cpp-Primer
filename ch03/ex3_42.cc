#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    const int arr_size = 10;
    vector<int> ivec;
    int ia[arr_size];
    int num;

    cout << "Push " << arr_size << " integers into the vector: " << endl;
    for(int i = 0; i < arr_size; ++i) {
        cin >> num;
        ivec.push_back(num);
    }

    auto iter = ivec.cbegin();
    for(auto &i : ia) {
        i = *iter;
        ++iter;
    }

    cout << "Result:" << endl;
    for(auto i : ia)
        cout << i << " ";
    cout << endl;
    return 0;
}
