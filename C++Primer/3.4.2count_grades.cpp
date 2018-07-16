#include <iostream>
#include <vector>
int main() {
  std::vector<int> v(11, 0);
  unsigned num = 0;
  auto iterator = v.begin();
  while (std::cin >> num) {
    if (num <= 100)
      ++*(iterator + num / 10);
  }
  for (auto i : v) {
    std::cout << i << std::endl;
  }
  return 0;
}
