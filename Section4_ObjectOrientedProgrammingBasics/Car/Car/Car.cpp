#include "Car.h"
#include <iostream>
int Car::totalCount = 0;
Car::Car() {
	++totalCount;
	std::cout << "Car()" << std::endl;
}

Car::Car(float amount) {
	++totalCount;
	fuel = amount;
}

Car::~Car() {
	--totalCount;
	std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float amount) {
	fuel = amount;
}

void Car::Accelerate() {
	this->speed++;
	this->fuel -= 0.5f;
}

void Car::Brake() {
	speed = 0;
}

void Foo(const Car& car) {

}

void Car::AddPassenger(int passengers) {
	this->passengers = passengers;
	Foo(*this);
}

void Car::Dashboard() const {
	std::cout << "Fuel: " << fuel << std::endl;
	std::cout << "Speed: " << speed << std::endl;
	std::cout << "Passengers: " << passengers << std::endl;
}

void Car::ShowCount() {
	std::cout << "Total cars: " << totalCount << std::endl;
}