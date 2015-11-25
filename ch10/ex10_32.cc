#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "../ch01/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::accumulate;

int main() 
{
  std::istream_iterator<Sales_item> in_iter(cin), eof;
  vector<Sales_item> vec;
  while(in_iter != eof)
    vec.push_back(*in_iter++);
  sort(vec.begin(), vec.end(), compareIsbn);
  for(auto beg = vec.cbegin(), end = beg; beg != vec.cend(); beg = end) {
    end = find_if(beg, vec.cend(), [beg](const Sales_item &item) { return item.isbn() != beg->isbn(); });
    cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
  }
  return 0;
}
