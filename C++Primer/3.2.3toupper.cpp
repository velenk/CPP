#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout; using std::endl;
int main() {
  string s("Hello World!");
  //Change to upper alpha.
  for (auto &c : s) {
    c = toupper(c);
  }
  cout << s << endl;
  return 0;
}
