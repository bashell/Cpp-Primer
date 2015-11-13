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
    /*
    else {
        cout << "The result:\n";
        for(auto iter = ivec.cbegin(); iter != ivec.cend() - 1; ++iter)
            cout << *iter + *(iter + 1) << endl;
    }
    */
    else {
        cout << "The result:\n";
        for(auto iter1 = ivec.cbegin(), iter2 = ivec.cend() - 1; iter1 <= iter2; ++iter1, --iter2)
            if(iter1 != iter2)
                cout << *iter1 + *iter2 << endl;
            else
                cout << *iter1 << endl;
    }
    
    return 0;
}
