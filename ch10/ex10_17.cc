#include <vector>
#include <algorithm>
#include "../ch07/ex7_26.h"

using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main()
{
  Sales_data d1("ab"), d2("abc"), d3("abcd"), d4("ff"), d5("eji");
  vector<Sales_data> sdvec{d1, d2, d3, d4, d5};
  sort(sdvec.begin(), sdvec.end(), 
      [] (const Sales_data &sd1, const Sales_data &sd2)
      { return sd1.isbn().size() < sd2.isbn().size(); });
  for(const auto &ele : sdvec)
    cout << ele.isbn() << " ";
  cout << endl;
  return 0;
}
