#include "ex7_41.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
  cout << "Default:" << endl;
  cout << "********************" << endl;
  Sales_data s1;

  cout << "\n\nOne string parameter:" << endl;
  cout << "********************" << endl;
  Sales_data s2("StringTest");

  cout << "\n\nAll three parameters:" << endl;
  cout << "********************" << endl;
  Sales_data s3("StringTest", 9, 20.0);

  cout << "\n\nIt's your time:" << endl;
  cout << "********************" << endl;
  Sales_data s4(cin);

  return 0;
}
