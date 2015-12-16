#include <iostream>
#include <vector>
#include <new>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::nothrow;

vector<int>* MyFunc1() {
  return new (nothrow) vector<int>;
}

void MyFunc2(vector<int> *iv) {
  int n;
  while(cin >> n)
    iv->push_back(n);
}

void MyFunc3(vector<int> *iv) {
  for(const auto &i : *iv)
    cout << i << " ";
  cout << endl;
}

int main()
{
  auto iv = MyFunc1();
  if(!iv)
    std::cerr << "There is not enough memory!" << endl;
  MyFunc2(iv);
  MyFunc3(iv);
  delete iv;
  iv = nullptr;
  return 0;
}
