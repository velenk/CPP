#include <iostream>
#include <vector>
int main() {
  //int num;
  std::string text;
  //std::vector<int> vector1;
  std::vector<std::string> vector1;
  while (std::cin >> text) {
    vector1.push_back(text);
  }
  for (auto i : vector1) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
