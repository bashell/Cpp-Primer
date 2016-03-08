#include <iostream>
#include <map>
#include <functional>
#include <string>

int add(int a, int b) { return a + b; }
auto mod = [](int a, int b) { return a % b; };
struct divide {
  int operator()(int denominator, int divisor) {
    return denominator / divisor;
  }
};

std::map<std::string, std::function<int(int, int)>> binops = {
  {"+", add},
  {"-", std::minus<int>()},
  {"/", divide()},
  {"*", [](int i, int j) { return i * j; }},
  {"%", mod} };

int main()
{
  while(std::cout << "Please input a and b: ", 1) {
    int lhs, rhs;
    std::string op;
    std::cin >> lhs >> op >> rhs;
    std::cout << binops[op](lhs, rhs) << std::endl;
  }
  return 0;
}
