#include <iostream>
#include <array>
void Array() {
	std::array<int, 5> arr{ 3, 1, 6, 5, 9 };
	for (int i = 0; i < arr.size(); ++i) {
		arr[i] = i;
	}
	auto itr = arr.begin();
	for (auto x : arr) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
	arr.data();
}

int main() {
	Array();
	return 0;
}