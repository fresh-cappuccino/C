#include <iostream>

#include "Number.h"

int main () {
	Number <int> n(13, 21);

	std::cout << "The bigger value between " << n.getA() << " and " << n.getB() << " is " << n.bigger() << std::endl;

	return 0;
}
