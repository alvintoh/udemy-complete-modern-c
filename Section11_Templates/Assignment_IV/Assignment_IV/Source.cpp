#pragma once
#include <string>

class Employee {
private: 
	std::string m_Name;
	int m_Id;
	int m_Salary;
public:
	Employee(std::string name, int id, int salary) :
		m_Name{ name }, m_Id{ id }, m_Salary{ salary } {};

};

class Contact {
private:
	std::string m_Name;
	int m_PhoneNumber;
	std::string m_Address;
	std::string m_Email;
public:
	Contact(std::string name, int phoneNumber, std::string address, std::string email):
		m_Name{name}, m_PhoneNumber {phoneNumber}, m_Address(address), m_Email(email){}
};

template<typename T, typename...Params>
T* CreateObject(Params&&... args) {
	return new T(std::forward<Params>(args)...);
};

int main() {
	Employee* emp = CreateObject<Employee>(
		"Bob",    //Name
		101,      //Id
		1000);   //Salary

	Contact* p = CreateObject<Contact>(
		"Joey",                //Name
		987654321,             //Phone number
		"Boulevard Road, Sgr", //Address
		"joey@poash.com");    //Email

}