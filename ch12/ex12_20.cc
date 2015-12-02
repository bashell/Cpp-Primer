#include <iostream>
#include <fstream>
#include "ex12_19.h"

int main(int argc, char **argv)
{
  if(argc != 2) {
    std::cerr << "We need a input file!" << std::endl;
    return -1;
  }    
  std::ifstream in(argv[1]);
  StrBlob blob;
  for(std::string str; std::getline(in, str); )
    blob.push_back(str);
  for(StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend; pbeg.incr())
    std::cout << pbeg.deref() << std::endl;
  return 0;
}
