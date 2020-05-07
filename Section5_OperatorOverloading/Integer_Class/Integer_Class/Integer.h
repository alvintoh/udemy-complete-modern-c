#pragma once
#include <iostream>
class Integer {
	int* m_pInt;
public:
	Integer();
	Integer(int value);
	Integer(const Integer& obj);
	Integer(Integer&& obj);
	int GetValue() const;
	void SetValue(int value);
	~Integer();
	Integer& operator++();
	Integer operator++(int);
	bool operator == (const Integer& obj) const;

	//Overloading Variables
	Integer& operator = (const Integer& a);
	Integer& operator = (Integer && a);
	Integer operator + (const Integer& a)const;

	void operator ()();
	friend std::istream& operator >> (std::istream& input, Integer& a);
	friend class Printer;

	explicit operator int();
};
class Printer {

};