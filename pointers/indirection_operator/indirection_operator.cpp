#include <iostream>

using namespace std;

typedef struct {
	string name;
	int age;
} Person;

int main () {
	Person person;
	Person *pointer_person = &person;

	cout << "Type the name of the person: ";
	cin >> pointer_person->name;

	cout << endl << "The name of the person was saved by indirection operator..." << endl << endl;

	cout << "Tyoe the age of the person: ";
	cin >> pointer_person->age;

	cout << "The age of the person was saved by indirection operator..." << endl << endl;

	cout << "This is the name of the person and it's been printed with indirection operators: " << pointer_person->name << endl;
	cout << "This is the age of the person and it's beem printed with indirection operators: " << pointer_person->age;

	return 0;
}
