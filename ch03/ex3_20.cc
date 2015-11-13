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
    if(ivec.size() == 0)
        cout << "No elements!" << endl;
    else if(ivec.size() == 1)
        cout << "Only one element: " << ivec[0] << endl;
    //else {
    //    cout << "The result:\n";
    //    for(unsigned int ix = 0; ix != ivec.size() - 1; ++ix)
    //        cout << ivec[ix] + ivec[ix + 1] << endl;
    //}
    else {
        cout << "The result:\n";
        for(unsigned int i = 0, j = ivec.size() - 1; i <= j; ++i, --j)
            if(i != j)
                cout << ivec[i] + ivec[j] << endl;
            else
                cout << ivec[i] << endl;
    }
    return 0;
}
