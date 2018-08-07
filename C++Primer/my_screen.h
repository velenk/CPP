#ifndef MY_SCREEN_H
#define MY_SCREEN_H
#include <iostream>
#include <string>
typedef std::string::size_type pos;
class Screen {
public:
  Screen() = default;
  Screen(pos h, pos w, char c) :
         height(h), width(w), contents(h * w, c) { }
  char Get() {return contents[cursor];}
  inline char Get(pos h, pos w) const;
  Screen& Move(pos h, pos w);
  Screen& Set(char c) {
    contents[cursor] = c;
    return *this;
  }
  Screen& Set(pos h, pos w, char c);
  Screen& Display(std::ostream& os) {
    DoDisplay(os);
    return *this;
  }
  const Screen& Display(std::ostream& os) const {
    DoDisplay(os);
    return *this;
  }
private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  void DoDisplay(std::ostream& os) const {os << contents;}
};
char Screen::Get(pos h, pos w) const {
  pos row = h * width;
  return contents[row + w];
}
inline Screen& Screen::Move(pos h, pos w) {
  cursor = h * width + w;
  return *this;
}
Screen& Screen::Set(pos h, pos w, char c) {
  pos row = h * width;
  contents[row + w] = c;
  return *this;
}
#endif
