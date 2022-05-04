#include "Screen.h"

Screen::Screen() : size(0) {}
Screen::Screen(float size) : size(size) {}



void Screen::setSize(float size) {
	size = size;
}

float Screen::getSize() {
	return size;
}