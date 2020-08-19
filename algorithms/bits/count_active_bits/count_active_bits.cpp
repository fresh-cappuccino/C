#include <iostream>

int countActiveBits (int num) {
	int count=0;
	while (num) {
		num &= (num-1);
		count++;
	}
	return count;
}

int main () {
	int num=127;

	std::cout << num << " has " << countActiveBits(num) << " bits" << std::endl;
}
