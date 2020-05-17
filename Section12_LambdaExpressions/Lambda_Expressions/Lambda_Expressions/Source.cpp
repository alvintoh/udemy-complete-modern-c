#include <iostream>
template<typename T>
struct Unnamed {
	int operator()(int x, int y)const {
		return x + y;
	}
};
int main() {
	auto fn = []() {
		std::cout << "Welcome to Lambda expressions" << std::endl;
	};
	fn();
	std::cout << typeid(fn).name() << std::endl;
	auto sum = [](auto x, auto y)noexcept(false) {
		return x + y;
	};

	Unnamed<int> n;
	std::cout << "Sum is:" << sum(5.5f, 2.2f) << std::endl;
	return 0;
}