#include <iostream>
#include <string>
using std::string;
int main() {
  string s = "Hello World!";
  //Upper the first word.
  for (decltype(s.size()) index = 0;
       index < s.size() && isalpha(s[index]);
       index++) {
    s[index] = toupper(s[index]);
  }
  std::cout << s << std::endl;
  return 0;
}
