#include "Vector.h"
#include <cmath>

Vector::Vector() {}
Vector::Vector(double _i) : i(_i) {}
Vector::Vector(double _i, double _j) : i(_i), j(_j) {}
Vector::Vector(double _i, double _j, double _k) : i(_i), j(_j), k(_k) {}
Vector::~Vector() {}

double Vector::getLength() const {
	return std::sqrt(i * i + j * j);
}

void Vector::normalize() {
	double l = getLength();
	i /= l;
	j /= l;
}

const Vector Vector::operator+(const Vector& other) const {
	return Vector(i + other.i, j + other.j, k + other.k);
}
const Vector Vector::operator-(const Vector& other) const {
	return Vector(i - other.i, j - other.j, k - other.k);
}
const Vector Vector::operator*(const Vector& other) const {
	return Vector(
		this->j * other.k - this->k * other.j,//определитель
		this->k * other.i - this->i * other.k,
		this->i * other.j - this->j * other.i);
}
const double operator*(const Vector& left, const Vector& right) {//скалярное
	return left.i * right.i + left.j * right.j + left.k * right.k;
}
const Vector Vector::operator*(const double& other) const {
	return Vector(i * other, j * other, k * other);
}
const Vector Vector::operator/(const double& other) const {
	return Vector(i / other, j / other, k / other);
}
bool Vector::operator>(const Vector& other) const {
	return other < *this;
}
bool Vector::operator<(const Vector& other) const {
	return getLength() < other.getLength();
}
std::ostream& operator<<(std::ostream& out, const Vector& val) {
	out << '{' << val.i << "; " << val.j << '}';
	return out;
}