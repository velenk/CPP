#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
class SalesData {
friend SalesData add(const SalesData&, const SalesData&);
friend std::ostream& print(std::ostream&, const SalesData&);
friend std::istream& read(std::istream&, SalesData&);
public:
  SalesData() = default;
  SalesData(const std::string& s) : book_isbn_(s) { }
  SalesData(const std::string& s, int n, double p) :
            book_isbn_(s), units_sold_(n), revenue_(p * n) { }
  SalesData(std::istream &);
  std::string isbn() const { return book_isbn_; }
  SalesData& combine(const SalesData&);
private:
  std::string book_isbn_;
  int units_sold_ = 0;
  double revenue_ = 0.0;
  double average_price() const {return (units_sold_ ? revenue_ / units_sold_ : 0); }
};
SalesData add(const SalesData&, const SalesData&);
std::ostream& print(std::ostream&, const SalesData&);
std::istream& read(std::istream&, SalesData&);
#endif

