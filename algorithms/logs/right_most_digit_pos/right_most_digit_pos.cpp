#include <cmath>
#include <iostream>

int right_most_digit_pos (int n) {
	return log2 (n & -n) + 1;
}

int main () {
	int n;

	std::cout << "Type a number: ";
	std::cin >> n;

	std::cout << "The first bit is in position " << right_most_digit_pos(n);
}
