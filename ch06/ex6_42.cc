#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const string &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    cout << "success:\nsingular form: " << make_plural(1, "success", "es") << "\nplural form: " << make_plural(2, "success", "es") << endl;
    cout << "failure:\nsingular form: " << make_plural(1, "failure") << "\nplural form: " << make_plural(2, "failure") << endl;
    return 0;
}
