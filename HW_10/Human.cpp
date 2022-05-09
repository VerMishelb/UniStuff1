#include "Human.h"

Human::Human() : name(""), surname(""), midname(""), age(0) {}
Human::Human(
	std::string surname,
	std::string name,
	std::string midname,
	int age
) : surname(surname), name(name), midname(midname), age(age) {}