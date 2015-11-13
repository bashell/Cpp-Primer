#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main()
{
    char s1[] = "abcdef";
    char s2[] = "ghijkl";
    char s3[strlen(s1) + strlen(s2) - 1];
    
    strcpy(s3, s1);
    strcat(s3, s2);
    cout << "Now, the result is:\n";
    cout << s3 << endl;
    return 0;
}
