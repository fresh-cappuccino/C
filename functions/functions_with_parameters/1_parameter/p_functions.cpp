#include <iostream>

using namespace std;

void print (string clause);

int main () {
	string clause;

	cout << "Type any word: ";
	cin >> clause;

	cout << "\nThe word typed was:";
	print(clause);

	return 0;
}

void print(string clause) {
	cout << clause;
}
