#include <iostream>

//int Max(int x, int y) {
//	return x > y ? x : y;
//}
//
//float Max(float x, float y) {
//	return x > y ? x : y;
//}

template<typename T>
T Max(T x, T y) {
	std::cout << typeid(T).name() << std::endl;
	return x > y ? x : y;
}

template char Max(char x, char y);
int main() {
	Max(static_cast<float>(3), 5.5f);
	Max<double>(3, 6.2);
	int (*pfn)(int, int) = Max;
	//auto num = Max(3.3f, 5.8f);
	//std::cout << num << std::endl;
	//auto num2 = Max(38, 12);
	//std::cout << num2 << std::endl;

	return 0;
}