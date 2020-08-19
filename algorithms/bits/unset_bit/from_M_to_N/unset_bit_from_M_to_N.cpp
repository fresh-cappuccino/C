#include <iostream>

template <class T>
void clearBits (T & num, int pos) {
	if (pos < (sizeof(T)*8) && pos) num &= ~((1<<pos)-1);
}

int main () {
	int num=15, pos=2;

	std::cout << "Num before clearing the bits: " << num << std::endl << std::endl;

	clearBits(num, pos);

	std::cout << "Num after clearing the bits : " << num << std::endl;
}
