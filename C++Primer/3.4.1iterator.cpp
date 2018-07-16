#include <iostream>
#include <string>
#include <cctype>
int main() {
  std::string s = "Hello World!";
  for (auto iterator = s.begin();
       iterator != s.end() && isalpha(*iterator);
       iterator++) {
    *iterator = toupper(*iterator);
  }
  std::cout << s << std::endl;
  return 0;
}
