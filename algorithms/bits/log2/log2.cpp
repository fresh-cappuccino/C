#include <iostream>

// funćão para encontrar um logaritmo de base 2
int log2 (int num) {
	int res=0;

	while (num >>= 1)
		++res;

	return res;
}

int main () {
	int num=256;

	std::cout << "log2(" << num << ") = " << log2(num) << std::endl;
}
