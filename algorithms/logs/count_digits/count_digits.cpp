#include <cmath>
#include <iostream>

int countDigits (int num ) {
	return floor (log10(num)+1);
}

int main () {
	int num;

	std::cout << "Type a number: ";
	std::cin >> num;

	std::cout << num << " has " << countDigits(num) << " digits";
}
