#include <iostream>

#include "conio.h"

int main () {
	char c;

	std::cout << "Type that shit: ";

	c = getch();

	std::cout << "Hmm, so you typed " << c;
}
