#include <iostream>

#include "Person.h"

using namespace std;

int main () {
	Person person ("Leonardo", 21);

	const Person PERSON;

	cout << "This is the name of the person in a constant instance: " << PERSON.getName() << endl << endl;
	cout << "This is the age of the person in a constant instance: " << PERSON.getAge() << endl;

	return 0;
}
