#include <iostream>
namespace Avg {
	float Calculate(float x, float y) {
		return (x + y) / 2;
	}
}
namespace Basic {
	float Calculate(float x, float y) {
		return x + y;
	}
}

namespace Sort {
	void Quicksort() {

	}

	void Mergesort() {

	}

	namespace Comparison {
		void Less() {

		}

		void Greater() {

		}
	}
}

namespace {
	void InternalFunction() {

	}
}

int main() {
	InternalFunction();
	using namespace Sort::Comparison;
	Sort::Comparison::Less();
	return 0;
}