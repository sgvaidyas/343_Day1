#include <iostream>

int main() {
	long long n;
	std::cin >> n;
	long long firstDigit = n % 10;

	while (firstDigit < n) {
		firstDigit *= 10;
	}

	n /= 10;
	std::cout << firstDigit + n;
	
	return 0;
}
