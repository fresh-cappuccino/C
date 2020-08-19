#include <bits/stdc++.h>

// Function to find the number of
// solutions of n = n xor x
int numberOfSolutionsBruteForce (int n) {
	// Counter to store the number
	// of solutions found
	int c = 0;

	for (int x = 0; x <= n; ++x)
		if (n == x + n ^ x)
			++c;

	return c;
}

// Function to find the number of
// solutions of n = n xor x
int numberOfSolutionsEfficient (int n) {
    // Number of set bits in n
    int c = 0;

    while (n) {
        c += n % 2;
        n /= 2;
    }

    // We can also write (1 << c)
    return pow(2, c);
}

int main() {
	int n = 3;
	std::cout << numberOfSolutionsBruteForce (n) << std::endl;
	std::cout << numberOfSolutionsEfficient (n) << std::endl;
}
