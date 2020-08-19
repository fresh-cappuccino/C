#include <iostream>

int main () {
	std::string s1 = "apple";
	std::string s2 ("banana");
	std::string s3;
	std::string s4;

	s3 = s1;
	s4.assign(s2);

	s1 = "CHULULU";

	std::cout << "String 1: " << s1 << std::endl;
	std::cout << "String 2: " << s2 << std::endl;
	std::cout << "String 3: " << s3 << std::endl;
	std::cout << "String 4: " << s4 << std::endl;

	std::cout << std::endl;

	std::cout << "String 1, index 4: " << s1.at(4) << std::endl;

	std::cout << std::endl;

	s3.swap(s4);

	std::cout << "String 3: " << s3 << std::endl;
	std::cout << "String 4: " << s4 << std::endl;

	std::cout << std::endl;

	std::cout << "Finding 'na' in String s3, starting from left: " << s3.find("na") << std::endl;
	std::cout << "Finding 'na' in String s3, starting from right: " << s3.rfind("na") << std::endl;

	s1 = "I love you!";

	std::cout << std::endl;

	std::cout << "New String 1: " << s1 << std::endl;
	std::cout << "New String 1, erasing from 5th element: " << s1.erase(5) << std::endl;

	s1 = "Okay, I am so PERFECT!";

	std::cout << std::endl;

	std::cout << "String 1, before replace: " << s1 << std::endl;
	std::cout << "String 1, after replace : " << s1.replace(6, 4, "IWASAWA SAMA IS") << std::endl;
}
