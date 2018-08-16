#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string s = std::string(argv[0]) + std::string(argv[1]);
  std::cout << s << std::endl;
  return 0;
}
