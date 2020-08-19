#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
	int a, end;

	system("clear");

	cout << "LOOP FOR (<10) WITH \"a++\"" << endl;
	for (a=0; a<10; a++)
		cout << "Right now, A is " << a << endl;

	cout << endl << "LOOP FOR (<10) WITH \"++a\"" << endl;
	for (a=0; a<10; ++a)
		cout <<  "Right now, A is " << a << endl;

	cout << endl << "Now, enter a value to be the end of the loop: ";
	cin >> end;

	cout << endl << "LOOP FOR (<n) with \"a++\"" << endl;
	while (a++ < end)
	for (a=0; a<end; a++)
		cout << "A = " << a << endl;

	a = 0;

	cout << endl << "LOOP FOR (<n) with \"++a\"" << endl;
	for (a=0; a<end; ++a)
		cout << "A = " << a << endl;

	cout << endl << "LOOP FOR (<n) with \"a++\" but in comparison statement, not in increment one" << endl;
	for (a=0; a++<end; )
		cout << "A = " << a << endl;

	cout << endl << "LOOP FOR (<n) with \"++a\" but in comparison statement, not in increment one" << endl;
	for (a=0; ++a<end; )
		cout << "A = " << a << endl;

	return 0;
}
