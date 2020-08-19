#include <cmath>
#include <iostream>

int main () {
	double d = 3.27, d2 = 3.92, d3 = -1.5;

	std::cout << "ceil (" << d << ") = " << ceil (d) << std::endl;
	std::cout << "ceil (" << d2 << ") = " << ceil (d2) << std::endl;
	std::cout << "ceil (" << d3 << ") = " << ceil (d3) << std::endl;

	std::cout << std::endl;

	std::cout << "floor (" << d << ") = " << floor (d) << std::endl;
	std::cout << "floor (" << d2 << ") = " << floor (d2) << std::endl;
	std::cout << "floor (" << d3 << ") = " << floor (d3) << std::endl;

	std::cout << std::endl;

	std::cout << "round (" << d << ") = " << round (d) << std::endl;
	std::cout << "round (" << d2 << ") = " << round (d2) << std::endl;
	std::cout << "round (" << d3 << ") = " << round (d3) << std::endl;

	std::cout << std::endl;

	std::cout << "trunc (" << d << ") = " << trunc (d) << std::endl;
	std::cout << "trunc (" << d2 << ") = " << trunc (d2) << std::endl;
	std::cout << "trunc (" << d3 << ") = " << trunc (d3) << std::endl;
}
