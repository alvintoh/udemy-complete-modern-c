#include <iostream>
#include <string>
int main() {
	std::string filename{ R"(C:\temp\newfile.txt)" };
	std::cout << filename << std::endl;
	std::string message{ R"MSG(C++ Introduced filesystem API("In C++17)")MSG" };
	std::cout << message << std::endl;
	return 0;
}