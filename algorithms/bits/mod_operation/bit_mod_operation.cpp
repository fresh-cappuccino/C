#include <iostream>

template <class T>
bool isOdd (T num) {
	return num & 1;
}

int main () {
	int num;

	std::cout << "Type a number: ";
	std::cin >> num;

	std::cout << num << (isOdd(num) ? " IS ODD" : " IS EVEN");
}
