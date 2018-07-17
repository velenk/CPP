#include <iostream>
#include <vector>
using namespace std;
int main() {
  //Get a array as a.
  int a[10] = {}, b[10] = {};
  int i, j;
  for (i=0;i<10;i++) {
    a[i] = i;
  }
  //Copy a to b.
  for (i=0;i<10;i++) {
    *(b + i) = *(a + i);
    cout << b[i] << " ";
  }
  cout << endl;
  //Use vector to replace array.
  vector<int> vect(10, 0);
  for (i=0;i<10;i++) {
    vect[i] = i;
    cout << vect[i] << " ";
  }
  cout << endl;
  return 0;
}
