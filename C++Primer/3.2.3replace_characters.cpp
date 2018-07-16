#include <iostream>
#include <string>
using std::string;
int main() {
  string s = "easkdvjokawjpgioewrhg";
  //Replace every characters by "x".
  for (auto &c : s) {
    c = 'x';
  }
  std::cout << s << std::endl;
  return 0;
}
