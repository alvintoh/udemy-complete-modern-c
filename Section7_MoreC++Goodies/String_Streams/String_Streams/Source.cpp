#include <iostream>
#include <sstream>

std::string ToLower(const std::string& str) {
	std::string toLower;
	for (const auto& c : str) {
		toLower += std::tolower(c);
	}
	return toLower;
}
enum class Case { SENSITIVE, INSENSITIVE };

size_t Find(
	const std::string& source,         //Source string to be searched
	const std::string& search_string,  //The string to search for
	Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
	size_t offset = 0) {                //Start the search from this offset
		//Implementation
	if (Case::INSENSITIVE == searchCase) {
		auto src = ToLower(source);
		auto srcs = ToLower(search_string);
		return src.find(srcs, offset);
	}
	return source.find(search_string, offset);
}

int main() {
	//int a{ 5 },b{ 6 };
	//int sum = a + b;
	//std::stringstream ss;
	//ss << "Sum of " << a << " & " << b << " is " << sum << std::endl;
	//std::string s = ss.str();
	//std::cout << s << std::endl;
	//ss.str("");
	//ss << sum;
	//auto ssum = std::to_string(sum);
	//std::cout << ssum << std::endl;
	std::string data = "12 89 21";
	int a;
	std::stringstream ss;
	ss.str(data);
	while (ss >> a) {
		std::cout << a << std::endl;
	}
	int x = std::stoi("54");
	return 0;
}