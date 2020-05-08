#include <iostream>
#include<cstring>
#include<string>
const char* Combine(const char* pFirst, const char* pLast) {
	char* fullname = new char[strlen(pFirst) + strlen(pLast) + 1];
	strcpy(fullname, pFirst);
	strcat(fullname, pLast);
	return fullname;
}

std::string Combine(const std::string& first, const std::string& last) {
	std::string fullname = first + last;
	return fullname;
}

std::string ToUpper(const std::string& str) {
	std::string Upper;
	for (int i = 0; i < str.length(); i++)
		Upper += toupper(str[i]);
	return Upper;
}

std::string ToLower(const std::string& str) {
	std::string Lower;
	for (int i = 0; i < str.length(); i++)
		Lower += tolower(str[i]);
	return Lower;
}

int main() {
	//char first[10];
	//char last[20];
	//std::cin.getline(first, 10);
	//std::cin.getline(last, 20);

	//const char* pFullName = Combine(first, last);	
	//Insert into the database

	//std::cout << pFullName << std::endl;
	//delete[] pFullName;

	std::string first;
	std::string last;
	
	std::getline(std::cin, first);
	std::getline(std::cin, last);

	//std::string fullname = first + last;
	std::string fullname = Combine(first, last);
	//printf("%s", fullname.c_str());
	
	//Insert in the database
	std::cout << fullname << std::endl;
	
	//Print toUpper
	std::string Upper = ToUpper(first);
	std::cout << Upper << std::endl;

	//Print toLower
	std::string Lower = ToLower(last);
	std::cout << Lower << std::endl;
	
	return 0;
}

void UsingStdString() {
	//Initialize & assign
	std::string s = "Hello";
	s = "Hello";
	//Access
	s[0] = 'W';
	char ch = s[0];

	std::cout << s << std::endl;
	std::cin >> s;

	std::getline(std::cin, s);
	//Size
	s.length();

	//Insert & concatenate
	std::string s1{ "Hello" }, s2{ "World" };
	s = s1 + s2;

	s += s1;

	s.insert(6, "World");

	//Comparison
	if (s1 == s2) {

	}

	//Removal
	s.erase();
	s.erase(0, 5);
	s.clear();

	//Search
	auto pos = s.find("World", 0);
	if (pos != std::string::npos) {
		// Found
	}
}