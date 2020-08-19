#include <iostream>

#include "Birthday.h"

#include "Person.h"

int main () {
	std::string name;
	int month, day, year;

	Birthday birthday;
	Person person(name, birthday);

	std::cout << std::endl << "These are the infos about the person, before any input:" << std::endl;
	person.personInfo();

	std::cout << "Type the name of the person: ";
	std::getline (std::cin, name);

	std::cout << std::endl << "Type the month of birth of the person: ";
	std::cin >> month;

	std::cout << "Type the day of birth of the person: ";
	std::cin >> day;

	std::cout << "Type the year of birth of the person: ";
	std::cin >> year;

	birthday.setDate(month, day, year);

	person.setName(name);
	person.setBirthday(birthday);

	std::cout << std::endl << "These are the infos about the person, after the input:" << std::endl;
	person.personInfo();

	return 0;
}
