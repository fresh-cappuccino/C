#include <iostream>

template <class Value>
Value sum (Value a, Value b) {
	return a+b;
}

int main () {
	int a=6, b=7;
	double c=13.7, d=21.12;

	std::cout << a << " + " << b << " = " << sum (a, b) << std::endl;
	std::cout << c << " + " << d << " = " << sum (c, d);

	return 0;
}
