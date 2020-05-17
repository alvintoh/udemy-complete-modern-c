#include <utility>
#include <iostream>

template<typename T>
struct Max {
	int operator() (T x, T y) const {
		if (x > y) {
			return x;
		}
		else {
			return y;
		}
	}
};

auto Max = [](auto x, auto y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
};

template<typename T>
struct Greater {
	bool operator() (T x, T y) const {
		return x > y;
	}
};

auto Greater = [](auto x, auto y) {
	return x > y;
};

template<typename T>
struct Less {
	bool operator ()(T x, T y) const {
		return x < y;
	}
};

auto Less = [](auto x, auto y) {
	return x < y;
};

template<typename T>
struct MinMax {
	std::pair<T, T> operator()(T ItrBegin, T ItrEnd) {
		std::pair<T, T> minMax{};
		while (ItrBegin != ItrEnd) {
			auto element = *ItrBegin;
			if (minMax.first > element) {
				minMax.first = element;
			}
			if (minMax.second < element) {
				minMax.second = element;
			}
		}
		return minMax;
	}
};

auto MinMax = [](auto ItrBegin, auto ItrEnd) {
	std::pair<T, T> minMax{};
	while (ItrBegin != ItrEnd) {
		auto element = *ItrBegin;
		if (minMax.first > element) {
			minMax.first = element;
		}
		if (minMax.second < element) {
			minMax.second = element;
		}
	}
	return minMax;
};

int main() {
	return 0;
}