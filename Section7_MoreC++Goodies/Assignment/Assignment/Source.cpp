#include<iostream>
#include<string>
#include<vector>

std::string ToUpper(const std::string& str) {
	std::string Upper;
	for (auto i: str)
		Upper += toupper(str[i]);
	return Upper;
}

std::string ToLower(const std::string& str) {
	std::string Lower;
	for (auto i:str)
		Lower += tolower(str[i]);
	return Lower;
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

std::vector<int>
FindAll(
	const std::string& target,         //Target string to be searched
	std::string search_string,         //The string to search for
	Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
	size_t offset = 0) {                //Start the search from this offset
		//Implementation

	   /*
	   Return indices of found strings,
	   else an empty vector
	   */
	std::vector<int> result;
	int pos = Find(target, search_string, searchCase, offset);
	while (pos != std::string::npos) {
		result.push_back(pos);
		pos = Find(target, search_string, searchCase, pos+1);
	}
	return result;
}

int main() {
	return 0;
}