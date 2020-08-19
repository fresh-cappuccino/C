#include <iostream>

#include "Daughter.h"
#include "Mother.h"

int main () {
	Mother mother;
	Daughter daughter;

	mother.hello();

	std::cout << std::endl;

	mother.public_v = 11;
	// mother.protected_v = 22; --> Not allowed!!
	// mother.private_v = 33; --> Not allowed!!

	daughter.hello();
}
