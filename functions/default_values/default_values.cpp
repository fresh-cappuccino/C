#include <iostream>

using namespace std;

double getVolume (double a=1, double b=1, double c=1);

int main () {
	double a, b, c;

	cout << "Insert the first value to calculate the volume: ";
	cin >> a;

	cout << "Insert the second value to calculate the volume: ";
	cin >> b;

	cout << "Insert the third value to calculate the volume: ";
	cin >> c;

	cout << endl;

	cout << "Getting volume passing no parameters():" << endl;
	cout << "Result: " << getVolume() << endl << endl;

	cout << "Getting volume passing 1 parameter (a):" << endl;
	cout << "Result: " << getVolume(a) << endl << endl;

	cout << "Getting volume passing 2 parameters (a, b):" << endl;
	cout << "Result: " << getVolume(a, b) << endl << endl;

	cout << "Getting volume passing 3 parameters (a, b, c):" << endl;
	cout << "Result: " << getVolume(a, b, c) << endl;

	return 0;
}

double getVolume (double a, double b, double c) {
	return a*b*c;
}
