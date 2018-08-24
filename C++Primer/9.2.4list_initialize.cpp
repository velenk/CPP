#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main() {
  list<int> lst1 = {1, 2, 3};
  vector<double> lst2(lst1.begin(), lst1.end());
  //vector<int> lst1 = {1, 2, 3};
  //vector<double> lst2 = lst1;Error
  for (auto i : lst2) {
    cout << i << endl;
  }
  return 0;
}
