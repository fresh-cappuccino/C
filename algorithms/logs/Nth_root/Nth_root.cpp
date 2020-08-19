#include <cmath>
#include <iostream>

double nth_root_1 (double n, int k) {
	return pow (n, 1./k);
}

double nth_root_2 (double n, int k) {
	return pow (k, 1./k * log(n) / log(k));
}

int main () {
	int n, k;

	std::cout << "Type the value of N: ";
	std::cin >> n;

	std::cout << "Type the value of K: ";
	std::cin >> k;

	std::cout << "The " << k << "th root of " << n << " [method 1] is " << nth_root_1 (n, k) << std::endl;
	std::cout << "The " << k << "th root of " << n << " [method 2] is " << nth_root_2 (n, k) << std::endl;
}
