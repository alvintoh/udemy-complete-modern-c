#include <iostream>
/*
void Print(const int* ptr) {
	using namespace std;
	cout << *ptr << endl;
}

int main() {
	using namespace std;
	float radius = 0;
	cin >> radius;
	const float PI = 3.14;
	float area = PI * radius * radius;
	float circumference = PI * 2 * radius;
	cout << "Area is : " << area << endl;
	cout << "Circumference is : " << circumference << endl;
const int CHUNK_SIZE = 512;
const int* const ptr = &CHUNK_SIZE;
//*ptr = 1;
int x = 10;
// ptr = &x;
// *ptr = 1;
Print(&x);
cout << "main->x" << x << endl;
return 0;
}
*/

void Print(const int& ref) {
	using namespace std;
	cout << ref << endl;
}

int main() {
	using namespace std;
	int x = 5;
	Print(1);
	return 0;
}
