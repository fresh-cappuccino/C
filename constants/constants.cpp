#include <iostream>

#define CONST_INT_1 7

using namespace std;

int main () {
	const int CONST_INT_2 = 13;

	enum { CONST_INT_3 = 21 };;

	cout << "Hello, I am the constant 1, my value is " << CONST_INT_1 << " and it cannot be changed!" << endl;
	cout << "Hello, I am the constant 2, my value is " << CONST_INT_2 << " and it cannot be changed!" << endl;
	cout << "Hello, I am the constant 3, my value is " << CONST_INT_3 << " and it cannot be changed!" << endl;

	return 0;
}
