#include <iostream>
#include "sales_data.h"
int main() {
  SalesData total;
  total.book_isbn_ = "123456";
  std::string t = total.isbn();
  std::cout << t << std::endl;
  return 0;
}
