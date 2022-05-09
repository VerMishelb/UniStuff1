#include "Phone.h"
#include <cstring>

Phone::Phone() : Screen(3.5), Keyboard("EN"), os{ 0 }, supports5G(false) {
	strcpy_s(os, "Android 2.1");
}



void Phone::setOs(const char* os) {
	strcpy_s(this->os, os);
	if (this->os[63] != '\0') {
		this->os[63] = 0;
	}
}

char* Phone::getOs() {
	return os;
}

void Phone::set5G(bool supports) {
	supports5G = supports;
}

bool Phone::get5G() {
	return supports5G;
}