#ifndef PHONE_H
#define PHONE_H

#include "Screen.h"
#include "Keyboard.h"

class Phone : public Screen, public Keyboard {
public:
	Phone();
	~Phone() = default;

	void setOs(const char* os);
	char* getOs();
	void set5G(bool supports);
	bool get5G();

private:
	char os[64]{ 0 };
	bool supports5G{ false };
};


#endif // !PHONE_H
