#include <iostream>

// ex13_14
/*
class numbered {
 public:
  numbered() { mysn = unique++; }
  int mysn;
 private:
  static int unique;  
};
*/

// ex13_15
/*
class numbered {
 public:
  numbered() { mysn = unique++; }
  numbered(const numbered &n) { mysn = unique++; }
  int mysn;
 private:
  static int unique;  
};
*/

// ex13_16
class numbered {
 public:
  numbered() { mysn = unique++; }
  numbered(const numbered &n) { mysn = unique++; }
  int mysn;
 private:
  static int unique;  
};

int numbered::unique = 50;

//void f(numbered s) { std::cout << s.mysn << std::endl; }
void f(const numbered &s) { std::cout << s.mysn << std::endl; }

int main()
{
  numbered a, b = a, c = b;
  f(a);
  f(b);
  f(c);
  return 0;
}
