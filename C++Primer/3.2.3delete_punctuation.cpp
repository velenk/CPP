#include <iostream>
#include <string>
#include <cctype>

int main() {
  std::string s;
  std::cout << "Input a string:" << std::endl;
  getline(std::cin, s);
  //Delete the punctuations.
  for (auto &c : s) {
    if (!ispunct(c))
      std::cout << c;
  }
  std::cout << std::endl;
  return 0;
}
