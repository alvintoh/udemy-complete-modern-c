#pragma once
#include <utility>

//Return the sum of two elements
template <typename T>
T Add(const T x, const T y) {
	return x + y;
}

//Returns the sum of array elements
template <typename T, size_t size>
T ArraySum(T(&pArr)[size]) {
	T arraySum{};
	for (int i = 0; i < size; ++i) {
		arraySum += pArr[i];
	}
	return arraySum;
}

//Return the largest element in the array
template <typename T, size_t size>
T Max(T(&pArr)[size]) {
	T largestElement{};
	for (int i = 0; i < size; ++i) {
		if (pArr[i] > largestElement) {
			largestElement = pArr[i];
		}
	}

	return largestElement;
}

//Return the smallest and largest element in a pair
template <typename T, size_t size>
std::pair<T, T> MinMax(T(&pArr)[size]) {
	std::pair<T, T> minMax{ pArr[0], pArr[0] };
	for (int i = 0; i < size; ++i) {
		if (pArr[i] < minMax.first) {
			minMax.first = pArr[i];
		}

		if (pArr[i] > minMax.second) {
			minMax.second = pArr[i];
		}
	}

	return minMax;
}