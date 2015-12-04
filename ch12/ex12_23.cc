#include <iostream>
#include <cstring>
#include <string>

int main()
{
  const char *c1 = "hello ";
  const char *c2 = "world";
  char *res = new char[strlen(c1) + strlen(c2) + 1];
  strcpy(res, c1);
  strcat(res, c2);
  std::cout << res << std::endl;
  delete [] res;

  std::string s1("hello "), s2("world");
  std::cout << s1 + s2 << std::endl;
  return 0;
}
