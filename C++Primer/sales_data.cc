#include <iostream>
using namespace std;

#include "sales_data.h"
SalesData::SalesData(std::istream& is) {
  read(is, *this);
}
SalesData& SalesData::combine(const SalesData &rhs) {
  units_sold_ += rhs.units_sold_;
  revenue_ += rhs.revenue_;
  return *this;
}
std::istream& read(std::istream& is, SalesData& item) {
  double price = 0;
  is >> item.book_isbn_ >> item.units_sold_ >> price;
  item.revenue_ = price * item.units_sold_;
  return is;
}
std::ostream& print(std::ostream& os, const SalesData& item) {
  os << item.book_isbn_ << " " << item.units_sold_ << " "
     << item.revenue_ << " " << item.average_price();
  return os;
}
SalesData add(const SalesData& lhs, const SalesData& rhs) {
  SalesData sum = lhs;
  sum.combine(rhs);
  return sum;
}

int main() {
  return 0;
}
