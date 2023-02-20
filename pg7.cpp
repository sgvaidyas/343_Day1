#include <iostream>
#include <cmath>
int main() {
	long long n;
	int dig;
	std::cin >> n;
	long long firstDigit = n % 10;
	
	dig = int(log10(n)+1);
	
	firstDigit = firstDigit *int(pow(10,dig-1));
	n /= 10;
	std::cout << firstDigit + n;
	
	return 0;
}
