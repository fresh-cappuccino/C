#include <bits/stdc++.h>

// This function returns the sum of
// the digits of a number
int getsum(int a) {
	int r = 0, sum = 0;
	while (a > 0) {
		r = a % 10;
		sum = sum + r;
		a = a / 10;
	}
	return sum;
}

// This function creates
// the array of valid numbers
void value(int a, int b, int c) {
	int co = 0, p = 0;
	int no, r = 0, x = 0, q = 0, w = 0;
	std::vector<int> v;

	for (int i = 1; i < 82; i++) {
		// this computes s(x)^a
		no = pow((double)i, double(a));

		// this gives the result of equation
		no = b * no + c;

		if (no > 0 && no < 1000000000) {
			x = getsum(no);

			// checking if the sum same as i
			if (x == i) {

				// counter to keep track of numbers
				q++;

				// resultant array
				v.push_back(no);
				w++;
			}
		}
	}

	// prints the number
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
}

// Problem: x = b*(sumofdigits(x)^a)+c
int main() {
	int a = 2, b = 2, c = -1;

	// calculate which value
	// of x are possible
	value(a, b, c);

	return 0;
}
