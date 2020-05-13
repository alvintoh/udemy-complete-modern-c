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
	return x > y ? x : y;
}

template<typename T>
T Add(T x, T y) {
	return x + y;
}

template<typename T>
T ArraySum(T* pArr, const T& arrSize) {
	T arraySum{};
	for (int i = 0; i < arrSize; ++i) {
		arraySum += pArr[i];
	}
	return arraySum;
}

template<typename T>
T Max(T* pArr, const T arrSize) {
	T largestElement{};
	for (int i = 0; i < arrSize; ++i) {
		if (pArr[i] > largestElement) {
			largestElement = pArr[i];
		}
	}

	return largestElement;
}

template<typename T>
std::pair<T, T> MinMax(T* pArr, const T& arrSize) {
	std::pair<T, T> minMax{ pArr[0], pArr[0] };
	for (int i = 0; i < arrSize; ++i) {
		if (pArr[i] < minMax.first) {
			minMax.first = pArr[i];
		}

		if (pArr[i] > minMax.second) {
			minMax.second = pArr[i];
		}
	}

	return minMax;
}
int main() {
	//auto num = Max(3.3f, 5.8f);
	//std::cout << num << std::endl;
	//auto num2 = Max(38, 12);
	//std::cout << num2 << std::endl;
	int arr[] = { 1,2,3,4,5,6,7,8 };
	auto num3 = MinMax(arr, 8);
	std::cout << num3.first << " " << num3.second << std::endl;

	return 0;
}