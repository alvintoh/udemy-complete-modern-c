#include <iostream>
#include <vector>
#include <list>

const char* GetErrorMessage(int errorNo) {
	return "Empty";
}
//typedef const char *(*PIN) (int)
using PIN = const char* (*)(int);
void ShowError(PIN pfn) {

}
//typedef std::vector < std::list <std::string>> Names;
using Names = std::vector<std::list<std::string>>;

int main() {
	Names names;
	Names nnames;

	PIN pfn = GetErrorMessage;
	ShowError(pfn);
	return 0;
}