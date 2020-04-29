#include <iostream>

int main() {
	using namespace std;
    //Try to modify x1 & x2 and see the compilation output
    int x = 5;
    const int MAX = 12;
    int& ref_x1 = x;
    const int& ref_x2 = x;

    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    //Immutable pointer value
    const int* ptr1 = &x;
    //Immutable pointer address
    int* const ptr2 = &x;
    //Immutable pointer value and address
    const int* const ptr3 = &x;

    //Find which declarations are valid. If invalid, correct the declaration
    const int* ptr5 = &MAX;
    // int* ptr4 = &MAX;
    const int* ptr4 = &MAX;

    const int& r1 = ref_x1;
    const int& r2 = ref_x2;

    const int*& p_ref1 = ptr1;
    const int* p_ref2 = ptr2;
}