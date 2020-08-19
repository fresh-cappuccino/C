#include <iostream>

int getLowestSettedBit (int num) {
	return num & (-num);
}

int main () {
	int num;

	std::cout << "Type a number: ";
	std::cin >> num;

	std::cout << "The lowest setted bit of " << num << " is " << getLowestSettedBit(num) << std::endl;
}
