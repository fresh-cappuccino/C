#include <iostream>

using namespace std;

unsigned long long factorial (unsigned long long num);

int main () {
	int num;

	cout << "Type a number to calculate its factorial: ";
	cin >> num;

	cout << num <<  "! = ";
	cout << factorial(num);

	return 0;
}

unsigned long long factorial (unsigned long long num) {
	return (num == 1 || !(num)) ? 1 : (num < 0) ? 0 : num * factorial (num-1);
}
