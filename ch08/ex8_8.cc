#include <fstream>
#include <iostream>
#include "ex8_8.h"

using std::endl;
using std::cerr;
using std::ifstream;
using std::ofstream;

int main(int arg, char *argv[])
{
  ifstream input(argv[1]);
  ofstream output(argv[2], ofstream::app);

  Sales_data total;
  if(read(input, total)) {
    Sales_data trans;
    while(read(input, trans)) {
      if(total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(output, total) << endl;
        total = trans;
      }
    }
    print(output, total) << endl;
  } else {
    cerr << "No data?!" << endl;
  }
  return 0;
}
