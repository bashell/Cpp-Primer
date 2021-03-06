#ifndef EX7_23_H
#define EX7_23_H

#include <string>

class Screen {
 public:
  typedef std::string::size_type pos;
  
  Screen() = default;
  Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}
  
  char get() const { return contents[cursor]; }

 private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
};

#endif
