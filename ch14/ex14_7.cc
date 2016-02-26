#include <algorithm>
#include "ex14_7.h"

std::pair<char*, char*>
String::alloc_n_copy(const char *b, const char *e) {
  auto str = alloc.allocate(e - b);
  return {str, std::uninitialized_copy(b, e, str)};
}

String::String(const char *s) {
  char *s1 = const_cast<char*>(s);
  while(*s1)
    ++s1;
  auto newstr = alloc_n_copy(s, ++s1);
  elements = newstr.first;
  end = newstr.second;
}

String::String(const String &rhs) {
  auto newstr = alloc_n_copy(rhs.elements, rhs.end);
  elements = newstr.first;
  end = newstr.second;
}

void String::free() {
  if(elements) {
    std::for_each(elements, end, [this] (char &c) { alloc.destroy(&c); });
    alloc.deallocate(elements, end - elements);
  }
}

String::~String() {
  free();
}

String& String::operator=(const String &rhs) {
  auto data = alloc_n_copy(rhs.elements, rhs.end);
  free();
  elements = data.first;
  end = data.second;
  return *this;
}

std::ostream &operator<<(std::ostream &os, const String &s) {
  char *c = const_cast<char*>(s.c_str());
  while(*c)
    os << *c++;
  return os;
}

int main()
{
  return 0;
}
