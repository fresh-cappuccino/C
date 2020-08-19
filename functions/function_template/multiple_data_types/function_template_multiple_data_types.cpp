#include <iostream>

template <class F, class S>
F smaller (F a, S b) {
	return a < b ? a : b;
}

int main () {
	int i = 13;
	double d = 21.13;

	std::cout << "The smaller is: " << smaller (d, i);

	return 0;
}
