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
    
    cout << "Input some numbers:\n";
    while(cin >> num)
        ivec.push_back(num);
    cout << "The result:\n";
    for(auto n : ivec)
        cout << n << ' ';
    cout << endl;
    return 0;
}
