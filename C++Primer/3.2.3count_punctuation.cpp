#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout; using std::endl;
int main() {
  string s("Hello World!!!");
  decltype(s.size()) punct_count = 0;
  //Statistic the number of punctuation characters in s.
  for (auto c : s) {
    if (ispunct(c))
      punct_count++;
  }
  cout << punct_count << " punctuation characters in " << s << endl;
  return 0;
}
