#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> vstr;
  std::string s;
  std::ifstream ifile;
  ifile.open("1.txt");
  if (ifile) {
    while (std::getline(ifile, s)) {
      vstr.push_back(s);
    }
  }
  for (auto i : vstr) {
    std::cout << i << std::endl;
  }
  return 0;
}
