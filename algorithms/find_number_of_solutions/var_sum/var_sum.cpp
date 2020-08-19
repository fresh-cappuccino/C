#include <bits/stdc++.h>

// function to find the number of solutions for
// the equation x + y + z <= n, such that
// 0 <= x <= X, 0 <= y <= Y, 0 <= z <= Z.
int NumberOfSolutions(int x, int y, int z, int n)
{
	// to store answer
	int ans = 0;

	// for values of x
	for (int i = 0; i <= x; i++) {

		// for values of y
		for (int j = 0; j <= y; j++) {

			// maximum possible value of z
			int temp = n - i - j;

			// if z value greater than equals to 0
			// then only it is valid
			if (temp >= 0) {

				// find minimum of temp and z
				temp = std::min (temp, z);
				ans += temp + 1;
			}
		}
	}

	// return required answer
	return ans;
}

// Driver code
int main()
{
	int x = 1, y = 2, z = 3, n = 4;

	std::cout << NumberOfSolutions (x, y, z, n);

	return 0;
}
