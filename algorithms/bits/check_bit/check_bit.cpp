#include <iostream>

// funćão para checar se um bit na posićão N está ou não ativo
template <class T>
bool checkBit (T num, T pos) {
	return num & (1 << pos);
}

int main () {
	int num=21, pos=0;
	std::cout << std::boolalpha << checkBit (num, pos) << std::endl;
	std::cout << (checkBit(num, pos) ? "true" : "false") << std::endl;
}
