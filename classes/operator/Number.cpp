#include <iostream>

#include "Number.h"

Number::Number () :
	number (0)
{}

Number::Number (int number) :
	number (number)
{}

Number::~Number () {}

Number Number::operator+ (Number number) {
	Number no;
	no.setNumber(number.getNumber() + this->number);
	return no;
}

int Number::getNumber () {
	return number;
}

void Number::setNumber (int number) {
	this->number=number;
}
