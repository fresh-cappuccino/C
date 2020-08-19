#include <iostream>

#define NUM 5

using namespace std;

void printingArray (int array[]);

int main () {
	int array[5] = {1, 2, 3, 4, 5};

	for (int i=0; i<NUM; i++)
		cout << "Position " << i << " of the array: " << array[i] << endl;


	printingArray(array);

	return 0;
}

void printingArray (int array[]) {
	cout << endl << endl << "Printing the array with a function:" << endl << endl;

	for (int i=0; i<NUM; i++)
		cout << "Position " << i << " of the array: " << array[i] << endl;
}
