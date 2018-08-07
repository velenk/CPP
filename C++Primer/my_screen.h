#ifndef MY_SCREEN_H
#define MY_SCREEN_H
#include <string>
class Screen {
public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos h, pos w, char c) :
         height(h), width(w), contents(h * w, c) { }
  char Get() {return contents[cursor]}
  inline char Get(pos h, pos w) const;
  Screen& Move(pos h, pos w);
  Screen& Display(std::ostream& os) {
    DoDisplay(os);
    return *this;
  }
  const Screen& Display(std::ostream os) {
    DoDisplay(os);
    return *this;
  }
private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  void DoDisplay(std::ostream os) const {os << contents;}
};
char Screen::Get(pos h, pos w) const {
  pos row = h * width;
  return contents[row + w];
}
inline Screen& Move(pos h, pos w) {
  cursor = h * width + w;
  return *this;
}
#endif
