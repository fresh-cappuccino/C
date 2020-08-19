#include <iostream>

using namespace std;

int sum(int a, int b);

int main () {
	int a, b;

	cout << "Type the value for A: ";
	cin >> a;

	cout << "Type the value for B: ";
	cin >> b;

	cout << "The sum between " << a << " and " << b << " is " << sum(a, b);

	return 0;
}

int sum (int a, int b) {
	return a + b;
}
