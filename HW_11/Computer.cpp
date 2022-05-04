#include "Computer.h"

Computer::Computer() : Screen(21.5), Keyboard("EN", "QWERTY"), homePc(true) {}



void Computer::setAtHome(bool home) {
	homePc = home;
}

bool Computer::isAtHome() {
	return homePc;
}