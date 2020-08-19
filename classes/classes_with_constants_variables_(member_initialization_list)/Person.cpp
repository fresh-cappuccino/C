#include <iostream>

#include "Person.h"

Person::Person () :
	name("Leonardo"),
	age (21)
{}

Person::Person (std::string name, int age) :
	name (name),
	age (age)
{}

Person::~Person () {}

std::string Person::getName() {
	return name;
}

int Person::getAge() {
	return age;
}

void Person::setAge(int age) {
	this->age=age;
}


std::string Person::getName() const {
	return name;
}

int Person::getAge() const {
	return age;
}
