#include <iostream>

// funćão para transformar uma letra em lowercase
char lowercase_letter (char c) {
	return c | ' ';
}

int main () {
	char c='A';

	std::cout << c << " in lowercase is " << lowercase_letter(c) << std::endl;
}
