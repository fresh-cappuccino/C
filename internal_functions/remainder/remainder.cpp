#include <iostream>
#include <cmath>

int main () {
	std::cout << "The remainder of 10/3, with % is " << 10 % 3 << std::endl;
	std::cout << "The remainder of 12/4.32, with remainder is " << remainder (12, 4.32) << std::endl;
	std::cout << "The remainder of 21/4.2, with fmod() is " << fmod (21, 4.2) << std::endl;
}
