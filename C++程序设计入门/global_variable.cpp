#include <iostream>

using namespace std;
int v1 = 10;

int main(){
	int v1 = 5;
	cout<<"v1="<<v1<<endl;
	cout<<"v1="<<::v1<<endl;
	
	return 0;
}
