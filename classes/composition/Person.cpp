#include <iostream>

#include "Birthday.h"
#include "Person.h"

Person::Person () :
	name("Name"),
	birthdayObject()
{}

Person::Person (std::string name, Birthday birthday) :
	name(name),
	birthdayObject(birthday)
{}

Person::~Person () {}

std::string Person::getName() {
	return name;
}

void Person::setName(std::string name) {
	this->name=name;
}

std::string Person::getBirthday () {
	return std::to_string(birthdayObject.getMonth())  + "/" + std::to_string(birthdayObject.getDay()) + "/" + std::to_string(birthdayObject.getYear());
}

void Person::setBirthday (int month, int day, int year) {
	birthdayObject.setDate(month, day, year);
}

void Person::setBirthday (Birthday birthday) {
	birthdayObject.setDate(birthday.getMonth(), birthday.getDay(), birthday.getYear());
}

void Person::personInfo() {
	std::cout << "Name: " << name << std::endl;
	std::cout << "Age : " << birthdayObject.getDate() << std::endl;
}
