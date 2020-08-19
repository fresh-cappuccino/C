#include<bits/stdc++.h>
#include <iostream>

int countSolRecursive (int coeff[], int start,
		int end, int rhs)
{
	// Base case
	if (rhs == 0)
		return 1;

	// Initialize count
	// of solutions
	int result = 0;

	// One by subtract all smaller or
	// equal coefficiants and recur
	for (int i = start; i <= end; i++)
		if (coeff[i] <= rhs)
			result += countSolRecursive (coeff, i, end,
					rhs - coeff[i]);

	return result;
}

int countSolLoop (int coeff[], int n, int rhs) {
	// Create and initialize a table
	// to store results of subproblems
	int dp[rhs + 1];
	memset (dp, 0, sizeof(dp));
	dp[0] = 1;

	// Fill table in bottom up manner
	for (int i = 0; i < n; i++)
		for (int j = coeff[i]; j <= rhs; j++)
			dp[j] += dp[j - coeff[i]];

	return dp[rhs];
}

int main () {
	int coeff[] = {2, 2, 5};
	int rhs = 4;
	int n = sizeof(coeff) / sizeof(coeff[0]);

	std::cout << "Equation: x + 2y = 5\n\n";
	std::cout << "Number of solutions:\n\n";

	std::cout << "Recursive implementation:\n";
	std::cout << countSolRecursive (coeff, 0, n - 1, rhs) << std::endl << std::endl;

	std::cout << "Loop implementation:\n";
	std::cout << countSolLoop (coeff, n, rhs) << std::endl << std::endl;
}
