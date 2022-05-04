#include "Keyboard.h"
#include <cstring>

Keyboard::Keyboard() : lang{ 0 }, layout{ 0 } {}
Keyboard::Keyboard(const char* lang, const char* layout) {
	strcpy_s(this->lang, lang);
	strcpy_s(this->layout, layout);
}
Keyboard::Keyboard(const char* lang) : Keyboard::Keyboard(lang, "QWERTY") {}



void Keyboard::setLayout(const char* layout) {
	strcpy_s(this->layout, layout);
	if (this->layout[7] != '\0') {
		this->layout[7] = '\0';
	}
}

char* Keyboard::getLayout() {
	return this->layout;
}

void Keyboard::setLang(const char* lang) {
	strcpy_s(this->lang, lang);
	if (this->lang[3] != '\0') {
		this->lang[3] = '\0';
	}
}

char* Keyboard::getLang() {
	return this->lang;
}