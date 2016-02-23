#include <algorithm>
#include "ex13_49_String.h"

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

String::String(String &&s) noexcept
    : elements(s.elements), end(s.end)
{
  s.elements = s.end = nullptr;
}

String& String::operator=(String &&rhs) noexcept {
  if(this != &rhs) {
    free();
    elements = rhs.elements;
    end = rhs.end;
    rhs.elements = rhs.end = nullptr;
  }
  return *this;
}

int main()
{
  return 0;
}
