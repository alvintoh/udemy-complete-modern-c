#include <iostream>
#include <set>
#include <functional>
#include <map>
#include <string>
void Set() {
	std::multiset<int, std::greater<int>> s{ 8 , 2, 0 ,9, 5 };
	s.insert(1);
	s.insert(3);
	s.insert(3);
	s.insert(3);

	auto itr = s.begin();
	//*itr = 3;
	while (itr != s.end()) {
		std::cout << *itr++ << " ";
	}
	std::cout << std::endl;
	s.erase(0);
	s.erase(s.begin());
	itr = s.find(9);
	if (itr != s.end()) {
		std::cout << "Element found" << std::endl;
	}
	else {
		std::cout << "Not found" << std::endl;
	}
	auto found = s.equal_range(3);
	while (found.first != found.second) {
		std::cout << *found.first++ << " ";
	}
}

void Map() {
	std::multimap<int, std::string> m{
		{1, "Superman"},
		{2, "Batman"},
		{3, "Green Lantern"}
	};
	m.insert(std::pair<int, std::string>(8, "Aquaman"));
	m.insert(std::make_pair<int, std::string>(6, "Wonder Woman"));
	m.insert(std::make_pair<int, std::string>(6, "Powergirl"));

	/*
	m[0] = "Flash";
	m[0] = "Kid Flash";
	*/

	auto itr = m.begin();
	m.erase(0);
	auto found = m.equal_range(6);
	while (found.first != found.second) {
		std::cout << found.first->first << ":" << found.first->second << std::endl;
		found.first++;
	}

	//std::cout << itr ->first << ":" << itr->second << std::endl;
	//std::cout << "10:" << m[10] << std::endl;
	for (const auto& x : m) {
		std::cout << x.first << ":" << x.second << std::endl;
	}
	/*itr = m.find(1);
	if (itr != m.end()) {
		std::cout << "Found" << itr->second << std::endl;
	}
	else {
		std::cout << "Not Found" << std::endl;
	}*/
	
}

int main() {
	Map();
	return 0;
}