#include <iostream>

// Returns r-value
int Add(int x, int y) {
	return x + y;
}

// Return l-value
int& Transform(int& x) {
	x *= x;
	return x;
}
 
void Print(int& x) {
	std::cout << "Print(int&)" << std::endl;
}

void Print(const int& x) {
	std::cout << "Print(const int&)" << std::endl;
}

void Print(int&& r) {
	std::cout << "Print(int&&)" << std::endl;
}

int main() {
	// x, y & z are l-values & 5, 10 & 8 are r-values
	// int x = 5;
	// int y = 10;
	// int z = 8;

	// Expression returns r-value
	// int result = (x + y) * z;

	// Expression return l-value
	// ++x = 6;

	int x = 10;
	Print(x);

	Print(3);
	return 0;
}
