#ifndef LAPTOP_H
#define LAPTOP_H

#include "Screen.h"
#include "Keyboard.h"

class Laptop : public Screen, public Keyboard {
public:
	Laptop();
	~Laptop() = default;

	void setCharge(float percentage);
	float getCharge();
	void pressPowerButton();
	bool getPowerState();

private:
	float batteryCharge{ 100.f };
	bool power{ false };
};

#endif // !LAPTOP_H
