#ifndef MY_WINDOWS_H
#define MY_WINDOWS_H
#include <vector>
#include <string>
#include "my_screen.h"
class Windows {
public:
  Windows() = default;
  using ScreenIndex = std::vector<Screen>::size_type;
  void Clear(ScreenIndex);
private:
  std::vector<Screen> my_screens{Screen(24, 80, ' ')};
};
void Windows::Clear(ScreenIndex i) {
  Screen& s = my_screens[i];
  std::string str(s.height * s.width, ' ');
  s.contents = str;
}
#endif
