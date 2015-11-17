#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string res;
    for(int i = 0; i != argc; ++i)
        res += argv[i];
    cout << res << endl;
    return 0;
}
