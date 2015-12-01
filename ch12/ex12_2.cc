#include <iostream>
#include "ex12_2.h"

using std::cout;
using std::endl;

int main()
{
  const StrBlob csb{"a", "an", "the"};
  StrBlob sb{"m", "mm", "mmm"};
  cout << csb.size() << " " << csb.front() << " " << csb.back() << endl;
  cout << sb.size() << " " << sb.front() << " " << sb.back() << endl;
  sb.push_back("mmmm");
  sb.front() = "n";
  cout << sb.size() << " " << sb.front() << " " << sb.back() << endl;
  return 0;
}
