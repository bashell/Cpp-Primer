#include <vector>
#include <algorithm>
#include "ex13_31.h"

int main()
{
  std::vector<HasPtr> hpvec;
  std::string tmp;
  for(char ch = 'z'; ch > 'x'; --ch) {
    tmp = "a";
    tmp += ch;
    HasPtr hp_tmp(tmp);
    hpvec.push_back(hp_tmp);
  }
  std::sort(hpvec.begin(), hpvec.end());
  return 0;
}
