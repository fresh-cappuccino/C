#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	int a = 0, end;

	system("clear");

	cout << "LOOP WHILE (<10) WITH \"a++\"" << endl;
	while (a++ < 10)
		cout << "Right now, A is " << a << endl;

	a = 0;

	cout << endl << "LOOP WHILE (<10) WITH \"++a\"" << endl;
	while (++a < 10)
		cout <<  "Right now, A is " << a << endl;

	cout << endl << "Now, enter a value to be the end of the loop: ";
	cin >> end;

	a = 0;

	cout << endl << "LOOP WHILE (<n) with \"a++\"" << endl;
	while (a++ < end)
		cout << "A = " << a << endl;

	a = 0;

	cout << endl << "LOOP WHILE (<n) with \"++a\"" << endl;
	while (++a < end)
		cout << "A = " << a << endl;

	return 0;
}
