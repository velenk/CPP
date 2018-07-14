#include <iostream>

int main(){
	int sum = 0, value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;
	//EOF = Crtl + Z, Enter
	return 0;
}
