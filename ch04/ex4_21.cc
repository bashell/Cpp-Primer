#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    int num;

    cout << "Input some integers:" << endl;
    while(cin >> num)
        ivec.push_back(num);
    for(auto &i : ivec)
        i = (i % 2 == 1) ? i * 2 : i;
    cout << "Result:" << endl;
    for(auto i : ivec)
        cout << i << " ";
    cout << endl;
    return 0;
}
