#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void MyPrint(vector<int> ivec, unsigned index) {
    unsigned sz = ivec.size();
    if(!ivec.empty() && index < sz) {
        cout << ivec[index] << endl;
        MyPrint(ivec, index + 1);
    }
}

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    MyPrint(ivec, 0);
    return 0;
}
