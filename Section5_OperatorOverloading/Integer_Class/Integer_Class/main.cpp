#include <iostream>
#include "Integer.h"
#include <memory>
//Integer operator +(const Integer& a, const Integer& b) {
//	Integer temp;
//	temp.SetValue(a.GetValue() + b.GetValue());
//	return temp;
//}
//Copy Elision
//Integer Add(int a, int b) {
//	Integer temp(a + b);
//	return temp; //Named return value optimization
//	return Integer(a + b);
//}

void Process(Integer val) {

}

Integer operator + (int x, const Integer& y) {
	Integer temp;
	temp.SetValue(x + y.GetValue());
	return temp;
}

std::ostream & operator << (std::ostream& out, const Integer& a) {
	out << a.GetValue();
	return out;
}

std::istream& operator >> (std::istream& input, Integer& a) {
	int x;
	input >> x;
	*a.m_pInt = x;
	return input;
}

class IntPtr {
	Integer* m_p;
public:
	IntPtr(Integer* p) :m_p(p) {

	}
	~IntPtr() {
		delete m_p;
	}
	Integer* operator->() {
		return m_p;
	}
	Integer& operator*() {
		return *m_p;
	}	
};
void Process(std::shared_ptr<Integer> ptr) {
	std::cout << ptr->GetValue() << std::endl;
}
void CreateInteger() {
	std::shared_ptr<Integer> p(new Integer);
	(*p).SetValue(3);
	Process(p);
	//IntPtr p = new Integer
	std::cout << p->GetValue() << std::endl;
}
void Print(const Integer &a) {

}
class Product {
	Integer m_Id;
	int x;
public:
	Product(const Integer& id):m_Id(id), x(id.GetValue()) {
		std::cout << "Product(const Integer &)" << std::endl;
		//m_Id = id;
	}
	~Product() {
		std::cout << "~Product" << std::endl;
	}
};
int main() {
	//Integer a(1), b(3);
	//Integer sum1 = a + 5; // a.operator+(5)
	//Integer sum2 = 5 + a;
	//std::cout << sum1 << std::endl;
	//operator << (std::cout, sum1).operator<<(std::endl);
	//a();
	//std::cin >> a;
	//std::cout << a << std::endl;
	//Integer c;
	//a = a;
	//std::cout << a.GetValue() << std::endl;
	//a.SetValue(Add(a, b).GetValue());
	//Integer a = Add(3, 5);
	//Integer a(3);
	//auto b(std::move(a));
	//std::cout << a << std::endl;
	//Process(std::move(a));
	//Integer sum = a + b;
	//std::cout << (sum++).GetValue() << std::endl;
	//if (a == b) {
	//	std::cout << "Same" << std::endl;
	//}
	//else {
	//	std::cout << "Not same" << std::endl;
	//}

	//CreateInteger();
	//Integer a1{ 5 };
	//Initialization
	//Integer a2 = 5;
	//Print(5);
	//Assignment
	//a1 = 7;
	//int x = static_cast<int>(a1);

	Product p(5);
;	return 0;
}