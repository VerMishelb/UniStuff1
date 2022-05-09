#include <iostream>
#include "Boss.h"

Boss::Boss
(
	std::string surname,
	std::string name,
	std::string midname,
	int age,
	int workers
) : Human(surname, name, midname, age), workers(workers) {}

void Boss::print() {
	std::cout <<
		surname << ' ' <<
		name << ' ' <<
		midname <<
		", " << age << " y.o. Workers: " << workers;
}