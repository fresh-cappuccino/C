#include <iostream>

void swapTmp (int a, int b, int c) {
	int tmp = a;
	a = b;
	b = c;
	c = tmp;

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl << std::endl;
}

void swapSum (int a, int b, int c) {
	a += c + b;
	c = a - (b + c);
	b = a - (b + c);
	a -= b + c;

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl << std::endl;
}

void swapXor (int a, int b, int c) {
	a ^= b^c;
	c = a^b^c;
	b = a^b^c;
	a = a^b^c;

	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl << std::endl;
}

int main () {
	int a=7, b=13, c=21;

	std::cout << "Valores antes da troca:\n";
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl << std::endl;

	std::cout << "Trocando os valores criando uma variável temporária:\n";
	swapTmp(a, b, c);

	std::cout << "Trocando os valores por soma:\n";
	swapSum(a, b, c);

	std::cout << "Trocando os valores por XOR:\n";
	swapXor(a, b, c);
}
