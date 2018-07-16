#include <iostream>
#include <vector>
#include <cctype>
int main() {
  std::vector<int> vector1{1,2,3,4,5,6,7,8,9};
  for (auto iter = vector1.begin();iter != vector1.end();iter++) {
    *iter *= 2;
    std::cout << *iter << std::endl;
  }
  return 0;
}
