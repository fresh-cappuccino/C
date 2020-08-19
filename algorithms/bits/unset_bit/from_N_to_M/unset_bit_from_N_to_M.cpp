#include <iostream>

template <class T>
void clearBits (T & num, int pos) {
	if (pos < (sizeof(T)*8)) num &= ((1<<pos)-1);
}

int main () {
	int num=15, pos=2;

	std::cout << "Number before clearing the bits: " << num << std::endl << std::endl;

	clearBits(num, pos);

	std::cout << "Number after clearing the bits : " << num << std::endl;
}
