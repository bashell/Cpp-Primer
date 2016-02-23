#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::sort;

class Foo {
 public:
  Foo sorted() &&;
  Foo sorted() const &;
 private:
  vector<int> data;
};

Foo Foo::sorted() && {
  std::cout << "&&" << std::endl;

  sort(data.begin(), data.end());
  return *this;
}

// Ex13.56
/*
Foo Foo::sorted() const & {
  std::cout << "const &" << std::endl;

  Foo ret(this);
  return ret.sorted();
}
*/

// Ex13.57
Foo Foo::sorted() const & {
  return Foo(*this).sorted();
}

int main()
{
  Foo().sorted();  // call "&&"
  Foo f;
  f.sorted();  // call "const &"

  return 0;
}
