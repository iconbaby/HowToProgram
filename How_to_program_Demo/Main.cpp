#include<iostream>
int main() {
	int a = 0, b = 0, sum = 0;
	while (std::cin >> a >> b) {
		sum = a + b;
	}
	std::cout << "sum is " << sum << std::endl;
	return 0;
}