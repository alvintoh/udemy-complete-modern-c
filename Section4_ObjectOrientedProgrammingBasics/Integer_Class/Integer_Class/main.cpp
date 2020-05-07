#include <iostream>
#include "Integer.h"
#include <memory>
Integer Add(const Integer& a, const Integer& b) {
	Integer temp;
	temp.SetValue(a.GetValue() + b.GetValue());
	return temp;
}
// Copy Elision
//Integer Add(int a, int b) {
	// Integer temp(a + b);
	// return temp; //Named return value optimization
	// return Integer(a + b);
//}

void Process(Integer val) {

}
int main() {
	// Integer a(1), b(3);
	// a.SetValue(Add(a, b).GetValue());
	// Integer a = Add(3, 5);
	Integer a(3);
	//auto b(std::move(a));
	// std::cout << a << std::endl;
	Process(std::move(a));

	return 0;
}