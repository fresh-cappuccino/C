#include <iostream>

using namespace std;

void pass_by_value (int a);

void pass_by_reference (int *b);

int main () {
	int a, b;

	cout << "Type the value for the variable a: ";
	cin >> a;

	cout << "Type the value for the variable b: ";
	cin >> b;

	pass_by_value (a);

	pass_by_reference(&b);

	cout << endl << endl << "Now, out of the function, variable a, still have the value " << a << endl << endl;

	cout << "Now, out of the function, variable b, has its value modified to " << b << endl;

	return 0;
}

void pass_by_value (int a) {
	cout << endl << "Function getting variable A by value and adding 1 to it" << endl;
	cout << a << " + 1 = " << (++a);
}

void pass_by_reference (int *b) {
	cout << endl << "Function getting variable B by reference adding 1 to it" << endl;
	cout << *b << " + 1 = " << (++(*b));
}
