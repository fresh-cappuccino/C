#include <iostream>

#include "Number.h"

int main () {
	Number <int> n(13, 21);
	Number <double> n2 (7.6, 6.7);

	std::cout << "The bigger value between " << n.getA() << " and " << n.getB() << " is " << n.bigger() << std::endl;
	std::cout << "The bigger value between " << n2.getA() << " and " << n2.getB() << " is " << n2.bigger() << std::endl;

	return 0;
}
