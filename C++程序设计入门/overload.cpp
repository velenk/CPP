#include <iostream>

using namespace std;

int maxi(int a, int b){
	return a>b?a:b;
}

double maxi(double a, double b){
	return a>b?a:b; 
}

double maxi(double a, double b, double c){
	return (maxi(maxi(a, b), c));
}

int main(){
	cout<<maxi(3,4)<<endl;
	cout<<maxi(3.1,4.5)<<endl;
	cout<<maxi(3.1,4.5,8.8)<<endl;
	
	return 0;
}
