#include <iostream>;
int Factorial(int x) {
	int result = 1;
	for (int i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int i = 5;
	int result = Factorial(i);
	std::cout << "Factorial of " << i << " is " << result << std::endl;
	return 0;
}