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
  inline Get(pos h, pos w) const;
private:
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
};


#endif
