#include <iostream>

using namespace std;

#define print cout<<"count = "<<count<<endl;\
cout<<"refcount = "<<refcount<<endl;
//output the count and the refcount

int main(){
	int count = 1;
	int& refcount = count;
	
	refcount++;
	
	print;
	
	int clock = 10;
	refcount = clock;
	
	print;
	
	return 0;
}
