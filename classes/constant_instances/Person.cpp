#include <iostream>

#include "Person.h"

using namespace std;

Person::Person () {
	name="Name";
	age=0;
}

Person::Person (string name, int age) {
	this->name=name;
	this->age=age;
}

Person::~Person() {}

std::string Person::getName() {
	return name;
}

void Person::setName(string name) {
	this->name=name;
}

string Person::getName() const {
	return name;
}

int Person::getAge() {
	return age;
}

void Person::setAge(int age) {
	this->age=age;
}

int Person::getAge() const {
	return age;
}
