#include <iostream>
#include <fstream>
#include <iterator>

using std::endl;
using std::cerr;
using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;

int main(int argc, char *argv[])
{
  if(argc != 4) {
    cerr << "We need an input file and two output files!" << endl;
    return -1;
  }
  ifstream in(argv[1]);
  ofstream out1(argv[2]), out2(argv[3]);
  istream_iterator<int> in_iter(in), in_eof;
  ostream_iterator<int> out1_iter(out1, " "), out2_iter(out2, "\n");
  while(in_iter != in_eof) {
    if(*in_iter & 0x1)
      out1_iter = *in_iter++;
    else
      out2_iter = *in_iter++;
  }
  return 0;
}
