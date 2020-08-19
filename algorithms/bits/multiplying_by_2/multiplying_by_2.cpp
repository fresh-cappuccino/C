#include <iostream>

// funćão para multiplicar um número inteiro por 2
int multiplying_by_2 (int num) {
	return num << 1;
}

int main () {
	int num = 21;

	std::cout << "NUM = " << num << std::endl << std::endl;
	std::cout << num << " X 2 = " << multiplying_by_2(num) << std::endl;
}
