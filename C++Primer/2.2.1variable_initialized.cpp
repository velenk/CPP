#include <iostream>

int main(){
  //Error: std::cin >> int value;
  //Warning: int a {3.14};
  int b (3.14);
  std::cout << /*a << "\t" <<*/ b << std::endl;
  
  return 0;
}
