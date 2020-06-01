
#include "pch.h"
#include <iostream>
#include <conio.h>
class ClassA
{
protected:
	int value;
public:
	ClassA(int input) {
		value = input;
	};
	void show_value() {
		std::cout << value << std::endl;
	}
};
class ClassB : public ClassA {
public:
	ClassB(int inputS) : ClassA (inputS) {}
	void ValueSqr() {
		value *= value;
	}
};

int main(void)
{
	setlocale(LC_ALL, "rus");

	ClassA object_A(7);
	std::cout << "значение object_A = ";
	object_A.show_value();

	ClassB object_B(10);
	std::cout << "значение object_B = ";
	object_B.show_value();

	object_B.ValueSqr();
	std::cout << "квадрат значения object_B = ";
	object_B.show_value();

	std::cout << std::endl;

	return 0;
}

