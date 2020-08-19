#include <iostream>

#include "Number.h"

int main () {
	Number no1 (13);
	Number no2 (21);
	Number no3 (7);
	Number no4;

	no4=no1+no2+no3;

	std::cout << no4.getNumber();

	return 0;
}
