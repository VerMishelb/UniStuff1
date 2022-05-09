#include <iostream>
#include "Computer.h"
#include "Laptop.h"
#include "Phone.h"

//4 Вариант

int main() {
	Phone phone{};
	Computer pc{};
	Laptop lp{};

	std::cout << "Phone:\n" << phone.getLang() << '\n'
		<< phone.getLayout() << '\n'
		<< phone.getOs() << "\n\nPC:\n"
		<< pc.isAtHome() << '\n'
		<< pc.getSize() << "\n\nLaptop:\n"
		<< lp.getCharge() << '\n'
		<< lp.getPowerState() << '\n';
	return 0;
}