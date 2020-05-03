#include "Car.h"
#include <iostream>

int main() {
	Car::ShowCount();
	Car car(4);
	// car.FillFuel(6);
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Accelerate();
	car.Dashboard();

	Car c1, c2;
	Car::ShowCount();
	return 0;
}