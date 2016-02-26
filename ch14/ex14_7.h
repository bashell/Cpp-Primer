#ifndef EX14_7_H
#define EX14_7_H

#include <iostream>
#include <memory>
#include <utility>

class String {
  friend std::ostream &operator<<(std::ostream &, const String &);
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

std::ostream &operator<<(std::ostream&, const String&);

#endif  // EX14_7_H
