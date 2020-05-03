#include "Integer.h"

Integer::Integer() {
	m_pInt = new int(0);
}

Integer::Integer(int value) {
	m_pInt = new int(value);
}

Integer::Integer(const Integer& obj){
	m_pInt = new int(*obj.m_pInt);
}

int Integer::GetValue() const {
	return *m_pInt;
}

void Integer::SetValue(int value) {
	*m_pInt = value;
}

Integer::~Integer() {
	delete m_pInt;
}
