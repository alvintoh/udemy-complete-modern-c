#include <iostream>
class Animal {
public:
	void Eat() {
		std::cout << "Animal eating" << std::endl;
	}
	void Run() {
		std::cout << "Animal running" << std::endl;
	}
	void Speak() {
		std::cout << "Animal speaking" << std::endl;
	}
};

class Dog : public Animal {
public:
	void Eat() {
		std::cout << "Dog eating meat" << std::endl;
	}
	void Speak() {
		std::cout << "Dog barking" << std::endl;
	}
};

int main() {
	Dog d;
	d.Eat();
	d.Run();
	d.Speak();
	return 0;
}