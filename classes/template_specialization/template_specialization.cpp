#include <iostream>

#include "Number.h"

int main () {
	Number <int> i1 (7);
	Number <int> i2 (6);
	Number <double> d1 (13.21);
	Number <double> d2 (21.13);
	Number <char> c ('c');
	Number <std::string> s ("Leonardo");

	int ri = i1 + i2;
	double rd = d1 + d2;

	std::cout << "Number <int> i1        = " << i1.getA() << std::endl;
	std::cout << "Number <int> i2        = " << i2.getA() << std::endl;
	std::cout << "Number <double> d1     = " << d1.getA() << std::endl;
	std::cout << "Number <double> d2     = " << d2.getA() << std::endl;
	std::cout << "Number <char> c        = " << c.getC() << std::endl;
	std::cout << "Number <std::string> s = " << s.getS() << std::endl;
}
