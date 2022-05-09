#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"

class Student : public Human {
public:
	Student();
	Student
	(
		std::string surname,
		std::string name,
		std::string midname,
		int age,
		bool on_lesson
	);
	~Student() = default;

	virtual void print() override;

private:
	bool on_lesson{ false };
};

#endif