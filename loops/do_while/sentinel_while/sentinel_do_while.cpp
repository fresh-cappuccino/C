#include <cstdlib>
#include <iostream>

using namespace std;

int main () {
	int num, sum=0;

	system("clear");

	cout << "One way to make infinite loops:\n\n";

	do {
		cout << "Type the value to sum (0 exit the loop): ";
		cin >> num;

		if (num)
			sum += num;
		else
			break;
	} while (true);

	cout << "\nThe sum is " << sum;

	return 0;
}
