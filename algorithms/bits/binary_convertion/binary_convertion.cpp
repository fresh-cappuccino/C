#include <cmath>
#include <iostream>

std::string dec_to_bin (int num) {
	std::string s;

	for (int i=floor (log2 (num)); i>=0; i--)
		s.append((num & (1 << i)) ? "1" : "0");

	return s;
}

int bin_to_dec (std::string s) {
	int n = s.length(), deci=0;

	for (int i=n-1, j=0; j<n; i--, j++)
		if (s[i] == '1' && j<((sizeof(int)*8))) deci |= (1 << j);

	return deci;
}

int main () {
	int deci;
	std::string bina;

	std::cout << "Type a decimal number to be converted to binary: ";
	std::cin >> deci;

	std::cout << "Type a binary number to be converted to decimal: ";
	std::cin >> bina;

	std::cout << std::endl;
	std::cout << deci << " converted to binary is " << dec_to_bin(deci) << std::endl << std::endl;
	std::cout << bina << " converted to decimal is " << bin_to_dec(bina) << std::endl;
}
