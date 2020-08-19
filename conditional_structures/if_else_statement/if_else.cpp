#include <iostream>

using namespace std;

int main () {
	int age;

	cout << "Type your age: ";
	cin >> age;

	if (age > 60 )
		cout << "You are older than 60!";
	else
		cout << "You are not older than 60";

	return 0;
}
