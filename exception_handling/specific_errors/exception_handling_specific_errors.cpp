#include <iostream>

int main () {
	int mom, son;

	try {
		std::cout << "Type the mom's age: ";
		std::cin >> mom;

		std::cout  << "Type the son's age: ";
		std::cin >> son;

		if (son == mom) throw 1;
		else if (son > mom) throw 2;

		std::cout << "Mom's age: " << mom << std::endl;
		std::cout << "Son's age: " << son << std::endl;
	} catch (int x) {
		switch (x) {
			case 1:
				std::cout << "The son cannot have the same age of the mom!!" << std::endl;
				break;

			case 2:
				std::cout << "The son cannot be older than the mom!!" << std::endl;
				break;
		}
	}
}
