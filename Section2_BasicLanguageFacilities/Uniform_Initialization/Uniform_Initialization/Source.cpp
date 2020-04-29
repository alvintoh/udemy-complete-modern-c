#include <string>
int main()
{
	int a1;		// Uninitialized
	int a2 = 0; // Copy Initialization
	int a3(5);	// Direct Initialization
	std::string s1;
	std::string s2("C++"); //Direct Initialization for Code

	char d1[8]; // Uninitialized
	char d2[8] = { "\0" };
	char d3[8] = { 'a', 'b', 'c', 'd' }; //Aggregate Initialization
	char d4[8] = { "abcd" };

	int b1{}; // Value Initialization
	//int b2(); // Most Vexing Parse
	int b2{ 5 }; // Direct Initializations

	int b4 = 0;

	char e1[8]{};
	char e2[8]{ "Hello" };

	int* p1 = new int();

	char* p2 = new char[8]{};
	char* p3 = new char[8]{ "Hello" };

	/*
	1. Value initialization => T obj{};
	2. Direction initization => T obj{v};
	3. Copy initilization =>T obj = v;
	*/

	/*
	Uniform Initialization
	1. It forces initialization
	2. You can use direct initilization for array types;
	3. It prevents narrowing conversions;
	4. Uniform syntax for all types;
	*/
}