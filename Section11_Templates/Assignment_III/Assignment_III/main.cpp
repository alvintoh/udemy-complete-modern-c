#include "templates.h"
#include "specializedTemplates.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <utility>
#include <memory>

using namespace std;

int main() {
	/*
		Specialized function templates
	*/
	unique_ptr<const char[]> stringAddition{ Add("AB", "B") };
	cout << "Addition of AB and B: " << stringAddition << endl;
	const char* strings[]{ "AB", "B", "C" };
	unique_ptr<const char[]> stringSum{ ArraySum(strings) };
	cout << "Sum of AB and B and C: " << stringSum << endl;
	const char* stringMax{ Max(strings) };
	cout << "Max of AB and B and C: " << stringMax << endl;
	const pair<const char*, const char*> stringMinMax{ MinMax(strings) };
	cout << "Min of AB and B and C:  " << stringMinMax.first << endl
		<< "and Max of AB and B and C: " << stringMinMax.second << endl;


	cout << "-------------------------------" << endl;

	/*
		General function templates
	*/
	int numbers[]{ 1, 2, 3 };
	const auto addition = Add(4, 5);
	const auto floatAddition = Add(5.2f, 9.2f);
	const auto numbersSum = ArraySum(numbers);
	const auto max = Max(numbers);
	const auto minMax = MinMax(numbers);


	cout << "Addition of 4 and 5: " << addition << endl;
	cout << "Addition of 5,2 and 9,2: " << floatAddition << endl;
	cout << "Sum of 1, 2 and 3:  " << numbersSum << endl;
	cout << "Max of 1, 2 and 3:  " << max << endl;
	cout << "Min of 1, 2 and 3:  " << minMax.first << endl
		<< "and Max of 1, 2 and 3: " << minMax.second << endl;

	system("pause");

	return 0;
}