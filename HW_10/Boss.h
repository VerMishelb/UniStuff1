#ifndef BOSS_H
#define BOSS_H

#include "Human.h"

class Boss : public Human {
public:
	Boss() = default;
	Boss
	(
		std::string surname,
		std::string name,
		std::string midname,
		int age,
		int workers
	);
	~Boss() = default;

	virtual void print() override;

private:
	int workers{ 0 };
};


#endif // !BOSS_H
