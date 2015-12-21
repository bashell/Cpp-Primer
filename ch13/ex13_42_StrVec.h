#ifndef EX13_42_STRVEC_H
#define EX13_42_STRVEC_H

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
  
  std::string& at(size_t pos) { return *(elements + pos); }
  const std::string& at(size_t pos) const { return *(elements + pos); }

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

std::allocator<std::string> StrVec::alloc;

void StrVec::push_back(const std::string &s) {
  chk_n_alloc();
  alloc.construct(first_free++, s);
}

std::pair<std::string*, std::string*>
StrVec::alloc_n_copy(const std::string *b, const std::string *e) {
  auto data = alloc.allocate(e - b);
  return {data, uninitialized_copy(b, e, data)};
}

void StrVec::free() {
  if(elements) {
    for(auto p = first_free; p != elements; )
      alloc.destroy(--p);
    alloc.deallocate(elements, cap - elements);
  }
}

StrVec::StrVec(std::initializer_list<std::string> il) {
  auto newdata = alloc_n_copy(il.begin(), il.end());
  elements = newdata.first;
  first_free = cap = newdata.second;
}

StrVec::StrVec(const StrVec &s) {
  auto newdata = alloc_n_copy(s.begin(), s.end());
  elements = newdata.first;
  first_free = cap = newdata.second;
}

StrVec::~StrVec() {
  free();
}

StrVec& StrVec::operator=(const StrVec &rhs) {
  auto data = alloc_n_copy(rhs.begin(), rhs.end());
  free();
  elements = data.first;
  first_free = cap = data.second;
  return *this;
}

void StrVec::alloc_n_move(size_t new_cap) {
  auto newdata = alloc.allocate(new_cap);
  auto dest = newdata;
  auto elem = elements;
  for(size_t i = 0; i != size(); ++i) 
    alloc.construct(dest++, std::move(*elem++));
  free();
  elements = newdata;
  first_free = dest;
  cap = elements + new_cap;
}

void StrVec::reallocate() {
  auto newcapacity = size() ? 2 * size() : 1;
  alloc_n_move(newcapacity);
}

void StrVec::reserve(size_t new_cap) {
  if(new_cap > capacity())
    alloc_n_move(new_cap);
}

void StrVec::resize(size_t count) {

}

void StrVec::resize(size_t count, const std::string &s) {
  if(count > size()) {
    if(count > capacity()) reserve(2 * count);
    for(size_t i = size(); i != count; ++i)
      alloc.construct(first_free++, s);
  } else if(count < size()) {
    while(first_free != elements + count)
      alloc.destroy(--first_free);
  }
}

#endif  // EX13_42_STRVEC_H
