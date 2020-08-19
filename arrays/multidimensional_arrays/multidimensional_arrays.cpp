#include <iostream>

#define LIN 5
#define COL 7

using namespace std;

int main () {
	cout << "Hello! I am a dimensional array!" << endl << endl;
	int matrix[LIN][COL] = {{2, 1, 4, 6, 2, 8, 7},
													{4, 2, 6, 5, 4, 7, 3},
													{2, 1, 4, 6, 2, 8, 7},
													{4, 2, 6, 5, 4, 7, 3},
													{2, 1, 4, 6, 2, 8, 7}};

	for (int lin=0; lin<LIN; lin++) {
		for (int col=0; col<COL; ++col)
			cout << matrix[lin][col] << "\t";

		cout << endl;
	}

	return 0;
}
