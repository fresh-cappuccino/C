#include <iostream>

// funćão para setar um bit em determinada posićão para 1
template <class T>
void setBit (T & num, T pos) {
	if (pos < (sizeof (T) * 8)) num |= (1 << pos);
}

int main () {
	unsigned long long num=4, pos=63;
	setBit(num, pos);

	std::cout << num;
}
