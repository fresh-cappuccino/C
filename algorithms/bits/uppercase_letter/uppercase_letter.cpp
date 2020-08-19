#include <iostream>

// funćão para transformar uma letra minúscula em maiúscula
char uppercase_letter (char c) {
	return c & '_';
}

int main () {
	char c='a';

	std::cout << c << " in uppercase is " << uppercase_letter(c);
}
