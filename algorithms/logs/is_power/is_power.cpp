#include <math.h>
#include <iostream>

bool isPower (int n, int k) {
	double r1 = log10(n) / log10(k);
	int r2 = r1;

	return r1 == r2;
}

int main () {
	int n, k;

	std::cout << "Type the value of N: ";
	std::cin >> n;

	std::cout << "Type the value of K: ";
	std::cin >> k;

	std::cout <<std::endl;
	std::cout << n << (isPower(n, k) ? " IS" : " IS NOT") << " a power of " << k;
}
