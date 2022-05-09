#ifndef COMPUTER_H
#define COMPUTER_H

#include "Screen.h"
#include "Keyboard.h"

class Computer : public Screen, public Keyboard {
public:
	Computer();
	~Computer() = default;

	void setAtHome(bool home);
	bool isAtHome();
	void setEthernet(bool connected);
	bool getEthernet();

private:
	bool homePc{ true };
	bool ethernet{ true };
};

#endif // !COMPUTER_H
