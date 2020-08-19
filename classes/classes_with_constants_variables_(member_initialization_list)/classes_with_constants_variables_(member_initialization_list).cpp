#include <iostream>

#include "Person.h"

using namespace std;

int main () {
	Person person ("Leonardo de Andrade", 21);
	const Person PERSON;

	cout << "The person name is: " << person.getName() << "," << endl;
	cout << person.getName() << " is " << person.getAge() << " years old." << endl << endl;

	cout << "The const person name is: " << PERSON.getName() << endl;
	cout << "The const person age is: " << PERSON.getAge();

	return 0;
}
