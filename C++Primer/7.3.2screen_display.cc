#include <iostream>
#include "my_screen.h"

int main() {
  Screen my_screen(5, 5, 'X');
  my_screen.Move(4, 0).Set('#').Display(std::cout);
  std::cout << std::endl;
  my_screen.Display(std::cout);
  return 0;
}
