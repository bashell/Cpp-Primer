#include <iostream>

int main()
{
  std::cout << "Input the size you want to input: ";
  int sz;
  std::cin >> sz;
  char *input = new char[sz + 1]();
  std::cin.ignore();
  std::cout << "Input the string: ";
  std::cin.get(input, sz + 1);
  std::cout << input << std::endl;
  delete [] input;
  return 0;
}
