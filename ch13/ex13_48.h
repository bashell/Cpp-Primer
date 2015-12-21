#ifndef EX13_47_H
#define EX13_47_H

#include <memory>
#include <utility>
#include <iostream>
#include <algorithm>

class String {
 public:
  String() : String("") { }  // default constructor
  String(const char*);  // constructor
  String(const String&);
  String &operator=(const String&);
  ~String(); 

  const char *c_str() const { return elements; }
  size_t size() const { return end - elements; }
  size_t length() const { return end - elements - 1;}

 private:
  std::pair<char*, char*> alloc_n_copy(const char*, const char*);
  void free();

 private:
  std::allocator<char> alloc;
  char *elements;
  char *end;
};

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
  std::cout << "copy constructor" << std::endl;
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
  std::cout << "copy assignment" << std::endl;
}

#endif  // EX13_47_H
