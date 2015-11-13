#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string finalgrade;
    int grade;
    
    // version1
    /*
    cout << "Input the grade: " << endl;
    while(cin >> grade && grade >= 0 && grade <= 100) {
        finalgrade = (grade > 90) ? "high pass"
                            : (grade > 75) ? "pass"
                            : (grade > 60) ? "low pass" : "fail";
        cout << grade << " belongs to " << finalgrade << endl;
        cout << "Input the grade: " << endl;
    }
    */

    // version2
    cout << "Input the grade: " << endl;
    while(cin >> grade && grade >= 0 && grade <= 100) {
        if(grade > 90)
            finalgrade = "high pass";
        else if(grade > 75)
            finalgrade = "pass";
        else if(grade > 60)
            finalgrade = "low pass";
        else
            finalgrade = "fail";
        cout << grade << " belongs to " << finalgrade << endl;
        cout << "Input the grade: " << endl;
    }

    
    return 0;
}
