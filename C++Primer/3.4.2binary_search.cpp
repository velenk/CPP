#include <iostream>
#include <vector>
int main() {
  std::vector<int> vector1{1,2,3,4,5,6,7,8,9};
  int sought;
  std::cin >> sought;
  auto start = vector1.begin(), end = vector1.end();
  auto mid = vector1.begin() + (end - start) / 2;
  if (sought <= 0 || sought > 9)
    return -1;
  //Begin to binary search.
  while (*mid != sought) {
    if (*mid < sought) {
      start = mid;
    } else {
      end = mid;
    }
    mid = start + (end - start) / 2;
  }
  std::cout << *mid << std::endl;
  return 0;
}
