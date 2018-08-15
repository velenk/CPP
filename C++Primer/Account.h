#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
class Account {
public:
  Account(const std::string &s, double a) :
          owner(s), amount(a) { }
  Account() : Account(" ", 0) { }
  void calculate() {amount += amount * interest_rate;}
  static double rate() {return interest_rate;}
  static void rate(double new_rate);
private:
  std::string owner;
  double amount;
  static double interest_rate;
  static double InitRate() {return 0.25;}
};
void Account::rate(double new_rate) {
  interest_rate = new_rate;
}
#endif
