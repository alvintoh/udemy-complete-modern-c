#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
int main() {
	using namespace std::filesystem;
	path source(current_path());
	source /= "Source.cpp";

	path dest(current_path());
	dest /= "Copied.cpp";
	std::ifstream input{ source };
	std::cout << "Fail?" << std::boolalpha << input.fail() << std::endl;
	std::cout << "Good?" << std::boolalpha << input.good() << std::endl;
	std::cout << "Eof?" << std::boolalpha << input.eof() << std::endl;
	std::cout << "Bad?" << std::boolalpha << input.bad() << std::endl;
	if (!input) {
		std::cout << "Source file not found" << std::endl;
		return -1;
	}
	std::ofstream output{ dest };
	std::string line;
	while (!std::getline(input, line).eof()) {
		output << line << std::endl;
	}
	input.close();
	output.close();
	return 0;
