#include <iostream>

#define NUM 5

using namespace std;

int main () {
	int array[NUM];
	int *array_pointer = array;

	cout << "This is the address where pointer is pointing: " << array_pointer << endl << endl;
	cout << "Now, this is one address ahead: " << array_pointer+1 << endl << endl;

	cout << "See that one address ahead is actually 4 numbers ahead... This happens, because int values have a size of 4 bytes in memory...";

	cout << endl << endl << "This is the size in bytes of an integer value: " << sizeof(int);

	return 0;
}
