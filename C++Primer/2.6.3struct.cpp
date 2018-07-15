#include <iostream>
#include "sales_data.h"
#include <string>
int main() {
  SalesData data1, data2;
  //Input the data.
  double price = 0;
  std::cin >> data1.book_isbn_ >> data1.units_sold_ >> price;
  data1.revenue_ = data1.units_sold_ * price;
  std::cin >> data2.book_isbn_ >> data2.units_sold_ >> price;
  data2.revenue_ = data2.units_sold_ * price;
  //Judge if data1 equls to data2.
  if (data1.book_isbn_ == data2.book_isbn_) {
    //While ture, add data1 and data2.
    //Output ISBN, total count, total revenue, average price.
    int total_count = data1.units_sold_ + data2.units_sold_;
    double total_revenue = data1.revenue_ + data2.revenue_;
    std::cout << data1.book_isbn_ << " " << total_count << " "
              << total_revenue << " ";
    if (total_count != 0) {
      std::cout << total_revenue / total_count << std::endl;
    } else {
      std::cout << "no sales" << std::endl;
    }
    return 0;//Success
  } else {
    std::cerr << "Not the same ISBN" << std::endl;
    return -1;//Fail
  }
}
