#include <iostream>

// funćão para encontrar a posićão do primeiro bit setado em um dado número
int getLowestSettedBit (int num) {
	return num & (-num);
}

int main () {
	int num;

	std::cout << "Type a number: ";
	std::cin >> num;

	std::cout << "The lowest setted bit of " << num << " is " << getLowestSettedBit(num) << std::endl;
}
