#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	int topic = 0, option;
	string str;

	cout << "MENU" << endl << endl;
	cout << ++topic << ") Insert your name and we will say we love you" << endl;
	cout << ++topic << ") Insert yout name and we will say its beautiful" << endl;
	cout << ++topic << ") Insert a clause and we will print it in uppercase" <<endl;
	cout << ++topic << ") Insert a clause and we will print it in lowercase" << endl;

	cin >> option;
	getline(cin, str);

	switch (option) {
		case 1:
			cout << "Type your name: ";
			getline(cin, str);
			cout << "WE LOVE YOU, " << str << "!";

			break;

		case 2:
			cout << "Type your name: ";
			getline(cin, str);
			cout << "Your name is beautiful, " << str << "!";

			break;

		case 3:
			cout << "Type the clause: ";
			getline(cin, str);
			transform(str.begin(), str.end(), str.begin(), ::toupper);
			cout << "CLAUSE IN UPPERCASE:\n" << str;

			break;

		case 4:
			cout << "Type the clause: ";
			getline(cin, str);
			transform(str.begin(), str.end(), str.begin(), ::tolower);
			cout << "clause in lowercase\n" << str;

			break;

		default:
			cout << "Invalid option!";
	}

	return 0;
}
