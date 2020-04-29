#include <iostream>
int Sum(int x, int y) {
	return x + y;
}

int main() {
	auto i = 10;
	auto j = 5;
	auto sum = i + 4.3f;

	auto result = Sum(i, j);
	static auto y = 2;
	auto list = { 1,2,3,4 };
	return 0;
}