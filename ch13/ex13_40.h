#ifndef EX13_40_H
#define EX13_40_H

#include <string>
#include <utility>
#include <memory>
#include <initializer_list>

class StrVec {
 public:
  StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
  StrVec(std::initializer_list<std::string>);
  StrVec(const StrVec&);
  StrVec &operator=(const StrVec&);
  ~StrVec();
  void push_back(const std::string&);
  size_t size() const { return first_free - elements; }
  size_t capacity() const { return cap - elements; }
  std::string *begin() const { return elements; }
  std::string *end() const { return first_free; }

  void reserve(size_t new_cap);
  void resize(size_t count);
  void resize(size_t count, const std::string&);

 private:
  void chk_n_alloc() { if(size() == capacity()) reallocate(); }
  std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);
  void free();
  void reallocate();
  void alloc_n_move(size_t new_cap);

 private:
  static std::allocator<std::string> alloc;
  std::string *elements;
  std::string *first_free;
  std:: string *cap;
};

#endif  // EX13_40_H
