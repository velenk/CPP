#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct SalesData {
  std::string book_isbn_;
  int units_sold_ = 0;
  double revenue_ = 0.0;
};
#endif

