#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
#include "Transaction.h"
#include <typeinfo>
int main() {
	//Account *acc = new Savings("Bob", 100, 0.05f);
	//Transact(&acc);
	//std::cout << "Size of Account: " << sizeof(Account) << std::endl;
	//delete acc;
	Checking ch("Bob", 100, 50);
	//Account* p = &ch;
	Transact(&ch);

	//int i{};
	//float f{};
	//const std::type_info& ti = typeid(*p);
	//if (ti == typeid(Savings)) {
	//	std::cout << "p points to saving object" << std::endl;
	//}
	//else {
	//	std::cout << "Not pointing to saving object" << std::endl;
	//}
	//std::cout << ti.name() << std::endl;
	//Account* pAccount = &ch;
	//Checking* pChecking = static_cast<Checking*>(pAccount);
	return 0;
}
