#ifndef EX7_32_H
#define EX7_32_H

#include <iostream>
#include <string>
#include <vector>

class Screen;

class Window_mgr {
 public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
  
 private:
  std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen {
  friend void Window_mgr::clear(ScreenIndex);

 public:
  typedef std::string::size_type pos;
  
  Screen() = default;
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' ') {}
  Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}
  
  char get() const { return contents[cursor]; }
  Screen move(pos r, pos c);
  Screen set(char c);
  Screen set(pos r, pos c, char ch);

  Screen display(std::ostream &os) { do_display(os); return *this; }
  const Screen display(std::ostream &os) const { do_display(os); return *this; }

 private:
  void do_display(std::ostream &os) const { os << contents; }

 private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
};

inline Screen Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline Screen Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline Screen Screen::set(pos r, pos col, char ch) {
  contents[r*width + col] = ch;
  return *this;
}

void Window_mgr::clear(ScreenIndex i) {
  if(i >= screens.size()) return;
  Screen &s = screens[i];
  s.contents = string(s.height * s.width, ' ');
}

#endif
