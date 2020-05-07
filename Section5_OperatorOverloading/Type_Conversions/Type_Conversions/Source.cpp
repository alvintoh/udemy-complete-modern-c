#include <iostream>
int main() {
	int a = 5, b = 2;
	float f = static_cast<float>(a)/b;
	char* p = reinterpret_cast<char*>(&a);
	const int x = 1;
	int* g = const_cast<int*>(&x);
	std::cout << f << std::endl;
	return 0;
}