#include <cmath>
#include <iostream>

long long prev_power (long n, long k) {
	return (long long) pow (k, (long long) (log10(n) / log10(k)));
}

long long next_power (long n, long k) {
	return prev_power(n, k) * k;
}

int main () {
	long n, k;

	std::cout << "Type the value of N: ";
	std::cin >> n;

	std::cout << "Type the value of K: ";
	std::cin >> k;

	std::cout << std::endl;

	std::cout << "Power of K lower or equals than N: " << prev_power(n, k) << std::endl;
	std::cout << "Power of K greater than N        : " << next_power(n, k) << std::endl;
}
