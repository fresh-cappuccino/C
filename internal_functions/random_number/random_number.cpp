#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main () {
	int n, max;

	cout << "Type how many random numbers you want to generate: ";
	cin >> n;

	cout << "Now, type the maximum  random number to be generate: ";
	cin >> max;

	srand (time(0));

	for (int i=0; i<n; i++)
		cout << "random number " << i + 1 << ": " << rand() % max + 1 << endl;

	return 0;
}
