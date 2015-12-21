#ifndef EX13_47_H
#define EX13_47_H

#include <memory>
#include <utility>

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

#endif  // EX13_47_H
