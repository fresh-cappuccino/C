#include <iostream>

using namespace std;

int main () {
	int a;
	int *pointer_a = &a;

	cout << "Type the value for a: ";
	cin >> a;

	cout << endl << "Hey, this is the memory address of the variable a: " << &a << endl;
	cout << endl << "Hey, this is the memory address of the pointer: " << &pointer_a << endl;
	cout << endl << "Hey, this is the value of the variable a: " << a << endl;
	cout << endl << "Hey, this is the value of the pointer a: " << pointer_a << endl;
	cout << endl << "Hey, this is the value of the address where pointer a is pointing: " << *pointer_a << endl;

	return 0;
}
