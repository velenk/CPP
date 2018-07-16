#include <iostream>
#include <vector>
int main() {
  std::vector<int> vector0{1,45,6,4,56,32,98,70};
  int i;
  for (i=0;i<vector0.size()-1;i++) {
    std::cout << vector0[i] + vector0[i+1] << " ";
  }
  std::cout << std::endl;
  return 0;
}
