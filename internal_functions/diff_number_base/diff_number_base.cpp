#include <iostream>

int main () {
	int deci = 21; // decimal base number
	int hexa = 0x21; // hexadecimal base number
	int octa = 021; // octal base number

	std::cout << "PRINTING IN DECIMAL:" << std::endl;
	std::cout << "Value of decimal number 21: " << deci << std::endl;
	std::cout << "Value of hexadecimal number 21: " << hexa << std::endl;
	std::cout << "Value of octal number 21: " << octa << std::endl << std::endl;

	std::cout << "PRINTING IN HEXA:" << std::endl;
	std::cout << "Value of decimal number 21: " << std::hex << deci << std::endl;
	std::cout << "Value of hexadecimal number 21: " << std::hex << hexa << std::endl;
	std::cout << "Value of octal number 21: " << std::hex << octa << std::endl << std::endl;

	std::cout << "PRINTING IN OCTA:" << std::endl;
	std::cout << "Value of decimal number 21: " << std::oct << deci << std::endl;
	std::cout << "Value of hexadecimal number 21: " << std::oct << hexa << std::endl;
	std::cout << "Value of octal number 21: " << std::oct << octa << std::endl << std::endl;
}
