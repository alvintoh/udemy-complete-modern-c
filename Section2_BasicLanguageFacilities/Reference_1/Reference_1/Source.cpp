#include <iostream>

void Add(int a, int b, int& result) {
	//Add two numbers and return the result through a reference parameter
	using namespace std;
	result = a + b;
	cout << "This is result1: " << result << endl;
}

void Factorial(int a, int& result) {
	/// Find factorial of a number and return that through a reference parameter
	using namespace std;
	for (int i = 1; i <= a; i++) {
		result *= i;
	}
	cout << "This is result2: " << result << endl;
}

void Swap(int& a, int& b) {
	using namespace std;
	// Swap two numbers through reference arguments
	cout << "This is BEFORE a: " << a << " b:" << b << endl;
	int temp = a;
	a = b;
	b = temp;
	cout << "This is AFTER a: " << a << " b:" << b << endl;
}

void Print1(int* ptr) {
	using namespace std;
	if (ptr != nullptr)
		cout << *ptr << "\n";
}

void Print2(int& ptr) {
	using namespace std;
	cout << ptr << "\n";
}

int main() {
	using namespace std;
	int a = 5, b = 0;
	int result1 = 0;
	int result2 = 1;
	Add(a, b, result1);
	Factorial(a, result2);
	Swap(a, b);
	
	Print1(nullptr);
	Print2(b);
}