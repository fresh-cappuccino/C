#include <iostream>

using namespace std;

void print (int a);
void print (int a, int b);
void print (int a, int b, double d);
void print (double d);

int main () {
	int a, b;
	double d;

	cout << "Type the value of a: ";
	cin >> a;

	cout << "Type the value of b: ";
	cin >> b;

	cout << "Type the value of d: ";
	cin >> d;

	print (a);

	cout << endl;

	print (a, b);

	cout << endl;

	print (a, b, d);

	cout << endl;

	print (d);

	return 0;
}

void print (int a) {
	cout << "This function is called Print and has 1 parameter of the type int (" << a << ")!";
}

void print (int a, int b) {
	cout << "This function is called Print and has 2 parameter of the type int (" << a << ", " << b << ")!";
}

void print (int a, int b, double d) {
	cout << "This function is called Print and has 2 parameters of the type int (" << a << ", " << b << ") and 1 parameter of the type double (" << d << ")!";
}

void print (double d) {
	cout << "This function is called Print and has 1 parameter of the type double (" << d << ")!";
}
