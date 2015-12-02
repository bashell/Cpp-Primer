#include <iostream>
#include <memory>

using std::cout;
using std::endl;
using std::shared_ptr;

struct destination {};
struct connection {};

connection connect(destination *pd) {
  cout << "Open connection" << endl;
  return connection();
}

void disconnect(connection c) {
  cout << "Close connection" << endl;
}

void f(destination &d) {
  cout << "shared_ptr version" << endl;
  connection c = connect(&d);
  shared_ptr<connection> p(&c, [] (connection *p) { disconnect(*p); });
}

int main()
{
  destination d;
  f(d);
  return 0;
}
