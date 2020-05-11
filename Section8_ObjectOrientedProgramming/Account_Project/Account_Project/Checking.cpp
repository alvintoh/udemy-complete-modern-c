#include "Checking.h"
#include <iostream>

Checking::Checking(const std::string& name, float balance, float minBalance):
	n_MinimumBalance(minBalance), Account(name, balance) {
}

Checking::~Checking() {
}

void Checking::Withdraw(float amount) {
	float remainder = m_Balance - amount;
	if (remainder >= n_MinimumBalance) {
		Account::Withdraw(amount);
	} else {
		std::cout << "Invalid Amount" << std::endl;
	}
}

float Checking::GetMinimumBalance() const {
	return n_MinimumBalance;
}
