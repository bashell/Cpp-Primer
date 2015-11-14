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
        lettergrade = (grade < 60 ? scores[0] : scores[(grade - 50) / 10]);
        lettergrade += (grade >= 60 && grade % 10 > 7 ? "+" : 
                (grade >= 60 && grade != 100 && grade % 10 < 3 ? "-" : ""));
        cout << "Result: " << lettergrade << endl;
        cout << "Input a grade: ";
    }
    return 0;
}
