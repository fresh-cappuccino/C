#include <iostream>

#include "Daughter.h"
#include "Mother.h"

int main () {
	Mother mother;
	Daughter daughter;

	mother.hello();

	std::cout << std::endl;

	daughter.hello();
}
