#pragma once
#include <vector>
#include <utility>
#include "templates.h"

using namespace std;
//Return the sum of two elements
template<> const char* Add(const char* x, const char* y) {
	unsigned int newLength = strlen(x) + strlen(y) + 1;
	// Don't forget to free
	char* combined = new char[newLength];
	strcpy_s(combined, newLength, x);
	strcat_s(combined, newLength, y);
	return combined;
}

template<> vector<int> Add(vector<int> x, vector<int> y) {
	vector<int> sum;

	if (x.size() > y.size()) {
		sum = x;
		for (unsigned int i = 0; i < y.size(); ++i) {
			sum[i] += y[i];
		}
	}
	else {
		sum = y;
		for (unsigned int i = 0; i < x.size(); ++i) {
			sum[i] += x[i];
		}
	}

	return sum;
}


template<size_t size> const char* ArraySum(const char* (&pArr)[size]) {
	int buffer_size{};

	for (int i = 0; i < size; ++i) {
		buffer_size += strlen(pArr[i]);
	}

	unsigned combinedLength = buffer_size + 1;
	// Don't forget to free
	char* combined = new char[combinedLength];
	const char* first = pArr[0];

	strcpy_s(combined, combinedLength, first);
	for (int i = 1; i < size; ++i) {
		strcat_s(combined, combinedLength, pArr[i]);
	}

	return combined;
}

template<size_t size> vector<int> ArraySum(vector<int>(&pArr)[size]) {
	vector<int> sum{};
	unsigned int idx;
	for (int i = 0; i < size; ++i) {
		if (sum.size() < size) {
			sum = pArr[i];
			idx = i;
		}
	}

	for (int i = 0; i < size; ++i) {
		if (i == idx) continue;
		vector<int> curArray = pArr[i];
		for (int j = 0; j < curArray.size(); ++j) {
			sum[j] += curArray[j];
		}
	}

	return sum;
}

template<size_t size> const char* Max(const char* (&pArr)[size]) {
	const char* max = pArr[0];
	for (int i = 1; i < size; ++i) {
		const char* cur = pArr[i];
		if (strlen(cur) > strlen(max)) {
			max = cur;
		}
	}

	return max;
}

template<size_t size> vector<int> Max(vector<int>(&pArr)[size]) {
	vector<int> max = pArr[0];

	for (int i = 1; i < size; ++i) {
		if (pArr[i] > max) {
			max = pArr[i];
		}
	}

	return max;
}

template<size_t size> pair<const char*, const char*> MinMax(const char* (&pArr)[size]) {
	pair<const char*, const char*> minMax{ pair<const char*, const char*>(pArr[0], pArr[0]) };
	for (int i = 1; i < size; ++i) {
		const char* cur = pArr[i];
		if (strlen(cur) > strlen(minMax.second)) {
			minMax.second = cur;
		}
		if (strlen(cur) < strlen(minMax.first)) {
			minMax.first = cur;
		}
	}

	return minMax;
}

template<size_t size> pair<vector<int>, vector<int>> minMax(vector<int>(&pArr)[size]) {
	pair<vector<int>, vector<int>> minMax{ pArr[0], pArr[0] };

	for (int i = 1; i < size; ++i) {
		if (pArr[i] < minMax.first) {
			minMax.first = pArr[i];
		}
		if (pArr[i] > minMax.second) {
			minMax.second = pArr[i];
		}
	}

	return minMax;
}
