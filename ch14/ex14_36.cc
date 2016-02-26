#include "ex14_36.h"

int main()
{
  GetString gs;
  std::vector<std::string> svec;
  gs(svec);
  for(const auto &s : svec)
    std::cout << s << " ";
  std::cout << std::endl;
  return 0;
}
