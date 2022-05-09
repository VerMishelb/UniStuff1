#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human {
public:
	~Human() = default;

	virtual void print() = 0;

protected:
	Human();
	Human
	(
		std::string surname,
		std::string name,
		std::string midname,
		int age
	);

	std::string
		name{ "" },
		surname{ "" },
		midname{ "" };
	int age{ 0 };
};

#endif // !HUMAN_H
