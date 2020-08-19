#include <iostream>

template <class T>
void setBit (T & num, T pos) {
	if (pos < (sizeof (T) * 8)) num |= (1 << pos);
}

int main () {
	unsigned long long num=4, pos=63;
	setBit(num, pos);

	std::cout << num;
}
