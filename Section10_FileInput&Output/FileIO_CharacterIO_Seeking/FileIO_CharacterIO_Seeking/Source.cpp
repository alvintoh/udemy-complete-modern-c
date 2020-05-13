#include <iostream>
#include <fstream>
#include <string>

void Write() {
	std::ofstream out("test.txt");
	if (!out) {
		std::cout << "Could not open file for writing" << std::endl;
		return;
	}
	std::string message{ "C++ was invented by Bjarne" };
	//std::cout << "Output Current position is: " << out.tellp() << std::endl;
	for (char ch: message) {
		out.put(ch);
	}
	//out.seekp(5);
	//out.put('#');
}

void Read() {
	std::ifstream input("test.txt");
	if (!input) {
		std::cout << "Source file not found" << std::endl;
		return;
	}
	//input.seekg(10, std::ios::beg);
	std::cout << "Input Current position is: " << input.tellg() << std::endl;
	char ch{};
	while (input.get(ch)) {
		std::cout << ch;
	}
}

void UsingFstream() {
	std::fstream stream("file.txt");
	if (!stream) {
		std::cout << "FILE DOES NOT EXIST.CREATING ONE..." << std::endl;
		std::ofstream out{ "file.txt" };
		out.close();
		stream.open("file.txt");
	}
	stream << "Hello world" << std::endl;
	stream.seekg(0);
	std::string line;
	std::getline(stream, line);
	std::cout << line << std::endl;
}

int main() {
	//Write();
	//Read();
	UsingFstream();
	return 0;
}