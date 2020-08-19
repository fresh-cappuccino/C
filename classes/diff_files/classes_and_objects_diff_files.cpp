#include <iostream>

#include "Person.h"

using namespace std;

int main () {
	Person person;
	string name;
	int age;

	cout << "Type the name of the person: ";
	getline(cin, name);
	person.setName(name);

	cout << "Type the age of the person: ";
	cin >> age;
	person.setAge(age);

	cout << "So, " << person.getName() << " is " << person.getAge() << " years old!";

	return 0;
}
