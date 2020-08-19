#include <iostream>

int main () {
	double n1, n2, res=0;

	try {
		std::cout << "Type the first number: ";
		std::cin >> n1;

		std::cout << "Type the seccond number: ";
		std::cin >> n2;

		if (!n2) throw 1;

		res = n1 / n2;

		std::cout << std::endl << std::endl << n1 << " / " << n2 << " = " << res << std::endl;
	} catch (...) {
		std::cout << "ERROR! DIVISION BY 0!!!";
	}
}
