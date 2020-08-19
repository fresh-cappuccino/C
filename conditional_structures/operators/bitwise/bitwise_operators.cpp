#include <iostream>

int main()
{
    unsigned long long a = 5, b = 9;

    // a = 5(00000101), b = 9(00001001)
		std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;

    // The result is 00000001
		std::cout << "a & b = " << (a&b) << std::endl << std::endl;

    // The result is 00001101
		std::cout << "a | b = " << (a|b) << std::endl << std::endl;

    // The result is 00001100
		std::cout << "a ^ b = " << (a^b) << std::endl << std::endl;

    // The result is 11111010
		a = ~a;
		std::cout << "~a = " << a << std::endl << std::endl;

    // The result is 00010010
		std::cout << "b << 1 = " << (b << 1) << std::endl << std::endl;

    // The result is 00000100
		std::cout << "b >> 1 = " << (b >> 1) << std::endl <<std::endl;
}
