#include <iostream>
#include <string>

std::istream& Input(std::istream& is) {
  std::string s;
  while (is >> s) {
    std::cout << s << std::ends;
  }
  is.clear();
  return is;
}
int main() {
  Input(std::cin);
  return 0;
}
