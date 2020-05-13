#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
int main() {
	using namespace std::filesystem;
	path source(current_path());
	source /= "Source.cpp";

	path dest(current_path());
	dest /= "Copy.cpp";

	std::ifstream input{ source };
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
