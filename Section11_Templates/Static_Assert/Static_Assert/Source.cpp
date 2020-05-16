#include <iostream>
#include<type_traits>
template<typename T>
T Divide(T a, T b) {
	if (std::is_floating_point<T>::value == false) {
		std::cout << "Use floating point types only\n";
		return 0;
	}
	return a / b;
}
int main() {
	static_assert(sizeof(void*) == 4, "Compile in 32-bit mode only");
	//if (sizeof(void*) != 4) {
	//	std::cout << "Not 32-bit mode\n";
	//	return 0;
	//}
	//else {
	//	//Alright
	//}

	std::cout
		<< std::boolalpha
		<< "Is integer?" << std::is_integral<int>::value << std::endl;

	std::cout << Divide(5, 2) << std::endl;
}