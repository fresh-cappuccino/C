#include <cmath>
#include <iostream>

// funćão responsável por converter decimal para binário
template <class T>
std::string dec_to_bin (T num) {
	std::string s;

	for (int i=floor (log2 (abs(num))); i>=0; i--)
		s.append((num & (1 << i)) ? "1" : "0");  // adiciona 1 para a string caso o bit esteja ativo e 0 caso contrário

	if (num < 0) s.insert(0, "-");

	return s;
}

// funćao responsável por converter binário para decimal
int bin_to_dec (std::string s) {
	int n = s.length(), deci=0;

	for (int i=n-1, j=0; j<n; i--, j++)
		if (s[i] == '1' && j<((sizeof(int)*8))) deci |= (1 << j);  // ativa-se o bit, caso a posićão da string contenha 1 e ainda haja espaćo armazenado na memória para a variável.

	return deci;
}

int main () {
	unsigned long long deci;
	std::string bina;

	std::cout << "Type a decimal number to be converted to binary: ";
	std::cin >> deci;

	std::cout << "Type a binary number to be converted to decimal: ";
	std::cin >> bina;

	std::cout << std::endl;
	std::cout << deci << " converted to binary is " << dec_to_bin(deci) << std::endl << std::endl;
	std::cout << bina << " converted to decimal is " << bin_to_dec(bina) << std::endl;
}
