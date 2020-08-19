#include <iostream>

// funćão para fazer uma divisão de inteiro por 2
int dividing_by_2 (int num ) {
	return num >> 1;
}

int main () {
	int num=42;

	std::cout << "NUM = " << num << std::endl <<std::endl;
	std::cout << num << " / 2 = " << dividing_by_2(num) << std::endl;
}
