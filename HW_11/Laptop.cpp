#include "Laptop.h"

Laptop::Laptop() : Screen(15.f), Keyboard("RU", "QWERTY"), batteryCharge(100.f), power(false) {}



void Laptop::setCharge(float percentage) {
	if (percentage < 0.f) { percentage = 0.f; }
	else if (percentage > 100.f) { percentage = 100.f; }

	batteryCharge = percentage;
}

float Laptop::getCharge() {
	return batteryCharge;
}

void Laptop::pressPowerButton() {
	if (batteryCharge > 0.f) {
		power = !power;
	}
}

bool Laptop::getPowerState() {
	return power;
}