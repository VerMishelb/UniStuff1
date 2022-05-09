#include <iostream>
#include "Student.h"

Student::Student() : Human(), on_lesson(false) {}
Student::Student
(
	std::string surname,
	std::string name,
	std::string midname,
	int age,
	bool on_lesson
) : Human(surname, name, midname, age), on_lesson(on_lesson) {}


void Student::print() {
	std::cout <<
		surname << ' ' <<
		name << ' ' <<
		midname << ", " <<
		age << " y.o. On lesson: " << ((on_lesson) ? "Yes" : "No");
}