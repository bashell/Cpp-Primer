#include <iostream>
#include <vector>

using std::vector;

struct X {
  X() { std::cout << "X()" << std::endl; }
  X(const X&) { std::cout << "X(const X&)" << std::endl; }
  X& operator=(const X&) { std::cout << "X& operator=(const X&)" << std::endl; return *this; }
  ~X() { std::cout << "~X()" << std::endl; }
};

void f1(X x) { }
void f2(X &x) { }

int main()
{
  std::cout << "局部变量:" << std::endl;
  X x;
  std::cout << std::endl;

  std::cout << "非引用参数传递:" << std::endl;
  f1(x);
  std::cout << std::endl;

  std::cout << "引用参数传递:" << std::endl;
  f2(x);
  std::cout << std::endl;

  std::cout << "申请内存:" << std::endl;
  X *px = new X;
  std::cout << std::endl;

  std::cout << "释放内存:" << std::endl;
  delete px;
  std::cout << std::endl;

  std::cout << "容器操作:" << std::endl;
  vector<X> xvec;
  xvec.push_back(x);
  std::cout << std::endl;

  std::cout << "直接初始化和赋值:" << std::endl;
  X y(x);
  y = x;
  std::cout << std::endl;

  return 0;
}
