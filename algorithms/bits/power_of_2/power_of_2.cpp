#include <iostream>

// funćão para verificar se um dado número é potência de 2 ou não
bool isPowerOf2 (int num) {
	return num && !(num & (num-1));
}

int main () {
	int num;

	std::cout << "Type a number: ";
	std::cin >> num;

	std::cout << num << (isPowerOf2(num) ? " IS" : " IS NOT") << " power of 2!" << std::endl;
}
