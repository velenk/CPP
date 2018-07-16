#include <iostream>
#include <vector>
int main() {
  std::vector<int> vector1{1,2,3,4,5,6,7,8,9};
  auto first = vector1.begin(), last = vector1.end() - 1;
  while (first < last) {
    std::cout << *first + *last << std::endl;
    first++;
    last--;
  }
  return 0;
}
