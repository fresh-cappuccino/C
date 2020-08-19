#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	int a = 0, end;

	system("clear");

	cout << "LOOP DO WHILE (<10) WITH \"a++\"" << endl;
	do {
		cout << "Right now, A is " << a << endl;
	} while (a++ < 10);

	a = 0;

	cout << endl << "LOOP DO WHILE (<10) WITH \"++a\"" << endl;
	do {
		cout <<  "Right now, A is " << a << endl;
	} while (++a < 10);

	cout << endl << "Now, enter a value to be the end of the loop: ";
	cin >> end;

	a = 0;

	cout << endl << "LOOP DO WHILE (<n) with \"a++\"" << endl;
	while (a++ < end)
		cout << "A = " << a << endl;

	a = 0;

	cout << endl << "LOOP DO WHILE (<n) with \"++a\"" << endl;
	do {
		cout << "A = " << a << endl;
	} while (++a < end);

	return 0;
}
