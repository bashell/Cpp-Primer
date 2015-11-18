#include <vector>

class NoDefault {
 public:
  NoDefault(int) {}
};

class C {
 public:
  C() : c_member(0) {}

 private:
  NoDefault c_member;
};

int main()
{
  C c;
  std::vector<C> cvec(10);
  return 0;
}
