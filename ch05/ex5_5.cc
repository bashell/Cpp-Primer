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
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade;
    string lettergrade;

    cout << "Input a grade: ";
    while(cin >> grade) {
        if(grade < 60)
            lettergrade = scores[0];
        else {
            lettergrade = scores[(grade - 50) / 10];
            if(grade != 100) {
                if(grade % 10 > 7)
                    lettergrade += "+";
                else if(grade % 10 < 3)
                    lettergrade += "-";
            }
        }
        cout << "Result: " << lettergrade << endl;
        cout << "Input a grade: ";
    }
    return 0;
}
