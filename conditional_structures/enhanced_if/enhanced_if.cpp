#include <algorithm>
#include <iostream>
#include <string>

#include <string.h>

using namespace std;

int main () {
	string name;
	int age;

	cout << "Type your name: ";
	getline(cin, name);

	cout << "Type your age: ";
	cin >> age;

	cout << endl;

	transform(name.begin(), name.end(), name.begin(), ::toupper);

	if (name.find("LEO") != string::npos || name.find("LEO ANDRADE") != string::npos)
		if (age == 21)
			cout << "MY MASTER!";
		else
			cout << "LIER, MAN!";
	else if (!(name.compare("MARIA EDUARDA")) || name.find("DUDA") != string::npos)
		if (age == 17)
			cout << "MY LADY!";
		else
			cout << "LIER, WOMAN!";
	else
		cout << "YOU ARE NO ONE!";

	return 0;
}
