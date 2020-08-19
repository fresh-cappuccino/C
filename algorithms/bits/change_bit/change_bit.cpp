#include <iostream>

/*
 * 3 2 1 0
 * 1 1 1 1
 * 0 1 1 1
 */

template <class T>
void changeBit (T & num, T pos) {
	if (pos < ((sizeof (T) * 8))) num ^= (1 << pos);
}

int main () {
	int num=15, pos=3;

	changeBit (num, pos);

	std::cout << num;
}
