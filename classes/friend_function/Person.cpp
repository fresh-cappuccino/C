#include <iostream>

#include "Person.h"

using namespace std;

Person::Person () {
	name = "Name";
	age = 21;
}

Person::Person (string name, int age) {
	this->name = name;
	this->age = age;
}

Person::~Person () {}

void Person::setName (string name) {
	this->name = name;
}

string Person::getName () {
	return name;
}

void Person::setAge (int age) {
	this->age = age;
}

int Person::getAge() {
	return age;
}

void changeAge (Person &p) {
	p.age = 13;
}
