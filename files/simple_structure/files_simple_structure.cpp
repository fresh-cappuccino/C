#include <iostream>
#include <fstream>

int main () {
	std::ofstream iwa, lain ("lain.chan");
	iwa.open("iwa.chan");

	if (iwa.is_open()) {
		iwa << "Iwa chan is PERFECT\n";
		iwa << "Iwa chan is SUBLIME\n";
	}

	if (lain.is_open()) {
		lain << "Lain chan is PERFECT\n";
		lain << "Lain chan is SUBLIME\n";
	}

	iwa.close();
	lain.close();
}
