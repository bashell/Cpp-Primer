#include <iostream>
#include <vector>
#include <algorithm>

class IsEqual {
 public:
  IsEqual(int v) : val_(v) {}
  bool operator()(int other) {
    return val_ == other;
  }
 private:
  int val_;
};

int main()
{
  std::vector<int> ivec{1, 2, 3, 3, 4, 4, 8, 2, 5};
  std::replace_if(ivec.begin(), ivec.end(), IsEqual(4), 10);
  for(auto i : ivec)
    std::cout << i << " ";
  std::cout << std::endl;
  return 0;
}
