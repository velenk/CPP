#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
  string str;
  list<string> ilist;
  while (cin >> str) {
    ilist.push_back(str);
  }
  auto iter1 = ilist.begin();
  auto iter2 = ilist.end();
  for (; iter1 != iter2; ++iter1) {
    cout << *iter1 << endl;
  }
  return 0;
}
