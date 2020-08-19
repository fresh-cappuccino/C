#include <bits/stdc++.h>

int swapBits1 (unsigned int x, unsigned int p1, unsigned int p2, unsigned int n) {
	/* xor contains xor of two sets */
	unsigned int Xor = (((x >> p1) ^ (x >> p2)) & ((1U << n) - 1));

	/* To swap two sets, we need to again XOR the xor with original sets */
	return x ^ ((Xor << p1) | (Xor << p2));
}

int swapBits2 (unsigned int num, unsigned int p1, unsigned int p2, unsigned int n) {
	int shift1, shift2, value1, value2;
	while (n--) {
		// Setting bit at p1 position to 1
		shift1 = 1 << p1;
		// Setting bit at p2 position to 1
		shift2 = 1 << p2;

		// value1 and value2 will have 0 if num
		// at the respective positions - p1 and p2 is 0.
		value1 = ((num & shift1));
		value2 = ((num & shift2));

		// check if value1 and value2 are different
		// i.e. at one position bit is set and other it is not
		if ((!value1 && value2) || (!value2 && value1)) {
			// if bit at p1 positon is set
			if (value1) {
				// unset bit at p1 position
				num = num & (~shift1);
				// set bit at p2 position
				num = num | shift2;
			}
			// if bit at p2 position is set
			else {
				// set bit at p2 position
				num = num & (~shift2);
				// unset bit at p2 position
				num = num | shift1;
			}
		}
		p1++;
		p2++;
	}
	// return final result
	return num;
}

int main() {
	int res = swapBits1 (28, 0, 3, 2);
	std::cout << "SwapBits1, result = " << res << std::endl;

	res = swapBits2 (28, 0, 3, 2);

	std::cout << "SwapBits2, result = " << res << std::endl;
	return 0;
}
