#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    
    auto iter = scores.begin();
    while(cin >> grade) {
        if(grade <= 100)
            *(iter + grade / 10) += 1;
    }
    cout << "The result:\n";
    for(auto iter = scores.cbegin(); iter != scores.cend(); ++iter)
        cout << *iter << " ";
    cout << endl;
    return 0;
}
