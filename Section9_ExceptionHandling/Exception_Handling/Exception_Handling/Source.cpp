#include <iostream>
#include <memory>
#include <vector>
#include <random>
class Test {
public:
	Test() { std::cout << "Test():Acquire resources" << std::endl; }
	~Test() { std::cout << "~Test():Release resources" << std::endl; }
};
int ProcessRecords(int count) {
	std::unique_ptr<Test> t(new Test);
	if (count < 10)
		throw std::out_of_range("Count should be greater than 10");
	std::vector<int> p;
	p.reserve(count);
	std::vector<int> pArray;
	pArray.reserve(count);
	
	//int* p = new int[count];
	//int* pArray = (int*)malloc(count * sizeof(int));
	//if (pArray == nullptr) {
	//	throw std::runtime_error("Failed to allocate memory");
	//}
	for (int i = 0; i < count; ++i){
		//pArray[i] = i;
		pArray.push_back(i);
	}
	//free(pArray);
	//delete[] p;
	std::default_random_engine eng;
	std::bernoulli_distribution dist;
	int errors{};
	for (int i = 0; i < count; i++) {
		try {
			std::cout << "Processing record # : " << i << " ";
			if (!dist(eng)) {
				++errors;
				throw std::runtime_error("Could not process the record");
			}
			std::cout << std::endl;
		}
		catch (std::runtime_error &ex) {
			std::cout << "[ERROR " << ex.what() << "]" << std::endl;
			if (errors > 4) {
				std::runtime_error err("Too many errors. Abandoning operation.");
				ex = err;
				throw;
			}
		}
	}

	return 0;
}

int main() {
	try {
		//ProcessRecords(std::numeric_limits<int>::max());
		ProcessRecords(10);
	}
	//catch (std::runtime_error& ex) {
	//	std::cout << ex.what() << std::endl;
	//}
	//catch (std::out_of_range& ex) {
	//	std::cout << ex.what() << std::endl;
	//}
	//catch (std::bad_alloc& ex) {
	//	
	catch (std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	//catch (...) {
	//	std::cout << "Exception" << std::endl;
	//}
	return 0;
}