#include <iostream>

int main() {
  int i = 5;
  int j = 2;
  int k = 5;
  double d = 1.8;
  i *= static_cast<int>(d);
  double slope = static_cast<double>(k/j);
  std::cout << i << std::endl << slope << std::endl;
  return 0;
}
