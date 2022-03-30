#include "Vector.h"
#include <cmath>

Vector::Vector() {}
Vector::Vector(double _i) : i(_i) {}
Vector::Vector(double _i, double _j) : i(_i), j(_j) {}
Vector::~Vector() {}

double Vector::getLength() {
	return std::sqrt(i * i + j * j);
}

void Vector::normalize() {
	double l = getLength();
	i /= l;
	j /= l;
}