#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
  string str;
  deque<string> deq;
  while (cin >> str) {
    deq.push_back(str);
  }
  auto iter1 = deq.begin();
  auto iter2 = deq.end();
  for (; iter1 != iter2; ++iter1) {
    cout << *iter1 << endl;
  }
  return 0;
}
