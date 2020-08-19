#include <iostream>

#include "Person.h"

Person::Person () :
	name ("Name"),
	age (18),
	cpf (11111111111)
{}

Person::Person (std::string name) :
	name (name),
	age (18),
	cpf (11111111111)
{}

Person::Person (int age) :
	name ("Name"),
	age (age),
	cpf (11111111111)
{}

Person::Person (long cpf) :
	name ("Name"),
	age (18),
	cpf (cpf)
{}

Person::Person (std::string name, int age, long cpf) :
	name (name),
	age (age),
	cpf (cpf)
{}

Person::~Person () {}

std::string Person::getName () {
	return name;
}

void Person::setName (std::string name) {
	this->name = name;
}

int Person::getAge () {
	return age;
}

void Person::setAge (int age) {
	this->age = age;
}

long Person::getCpf () {
	return cpf;
}

void Person::setCpf (long cpf) {
	this->cpf = cpf;
}
