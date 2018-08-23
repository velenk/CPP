#include <list>
using namespace std;
int main() {
  list<int> lst1;
  list<int>::iterator iter1 = lst1.begin(),
                      iter2 = lst1.end();
  //You Can't use < or >;
  while (iter1 != iter2) {
    ++iter1;
  }
  return 0;
}
