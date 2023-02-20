#include <iostream>
#include <cmath>

int main() {
	long long n;
	std::cin >> n;
	long long copy = n;
	long long result = 0;
	int length = 0;

	while (copy > 0) {
		++length;
		copy /= 10;
	}
	for (int i = length - 2; i >= 0; i -= 2) {
		copy = n / static_cast<long long>(pow(10, i));
		result *= 10;
		result += copy % 10;
		result *= 10;
		result += (copy / 10) % 10;
	}
	if (length % 2 == 1) {
		result = result * 10 + n % 10;
	}
	
	std::cout << result;
	
	return 0;
}
