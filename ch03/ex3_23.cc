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

    cout << "Input ten integers:\n";
    for(int i = 0; i < 10; ++i) {
        cin >> num;
        ivec.push_back(num);
    }
    cout << "The ten numbers are: ";
    for(auto iter = ivec.cbegin(); iter != ivec.cend(); ++iter)
        cout << *iter << " ";
    cout << endl;
    cout << "Twice of them are: ";
    for(auto iter = ivec.begin(); iter != ivec.end(); ++iter) {
        *iter *= 2;
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
