#include <iostream>

int Add(int* a, int* b) {
	//Add two numbers and return the sum
	int result = 0;
	result = *a + *b;
	return result;
}

void AddVal(int* a, int* b, int* result) {
	//Add two numbers and return the sum through the third pointer argument
	using namespace std;
	*result = *a + *b;
	cout << "This is result2 :" << *result << endl;
}
void Swap(int* a, int* b) {
	using namespace std;
	// Swap the value of two integers
	cout << "This is result3 BEFORE:" << *a << " " << *b << endl;
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "This is result3 AFTER:" << *a << " " << *b << endl;
}

void Factorial(int* a, int* result) {
	using namespace std;
	//Generate the factorial of a number and return that through the second pointer arguments
	int result1 = 1;
	for (int i = 1; i <= *a; ++i)
	{
		result1 *= i;
	}
	*result = result1;
	cout << "This is result4 for Factorial: " << *a << " and the result is: " << *result << endl;
}

int main() {
	using namespace std;
	int result1 = 0;
	int result2 = 0;
	int result4 = 0;
	int a1{ 5 };
	int b1{ 2 };
	int c1{ 5 };
	result1 = Add(&a1, &b1);

	cout << "This is result1 :" << result1 << endl;
	AddVal(&a1, &b1, &result2);

	Swap(&a1, &b1);
	
	Factorial(&c1, &result4);
}
