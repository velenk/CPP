#include <iostream>
#include <vector>

int main() {
  std::vector<int> vect1 = {1,2,3,4,5};
  auto i = vect1.begin();
  for (;i != vect1.end();i++) {
    (*i % 2 == 0) ? : *i *= 2;
    std::cout << *i << std::endl;
  }
  return 0;
}
