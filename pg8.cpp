#include <iostream>

int main() {
	long long n;
	std::cin >> n;
	long long firstDigit = n % 10;
	long long copy = n;

	while (copy / 10 > 0) {
		firstDigit *= 10;
		copy /= 10;
	}

	n /= 10;
	std::cout << firstDigit + n;
	
	return 0;
}
