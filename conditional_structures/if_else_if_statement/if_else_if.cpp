#include <iostream>

using namespace std;

int main () {
	int age;

	cout << "Type your age: ";
	cin >> age;

	if (age > 60)
		cout << "You are older than 60";
	else if (age < 60)
		cout << "You are younger than 60";
	else
		cout << "You are in your 60ies";

	return 0;
}
