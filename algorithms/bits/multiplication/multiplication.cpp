#include<iostream>

// Returns n * 7
int multiplyBySeven (int n) {
	// OR (n << 2) + (n << 1) + n
	return (n << 3) + n;
}

// Returns n * 11
int multiplyByEleven (int n) {
	return (n << 3) + ((n << 2) - n);
}

// Returns n * 12
int multiplyByThirteen (int n) {
	return (n << 3) + ((n << 2) + n);
}

int main() {
	std::cout << multiplyBySeven (5) << std::endl;
	std::cout << multiplyByEleven (5) << std::endl;
	std::cout << multiplyByThirteen (5) << std::endl;
}
