#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
private:
	double i = 0, j = 0;

public:
	Vector();
	Vector(double i);
	Vector(double i, double j);
	explicit Vector(const Vector& other) = default;
	~Vector();

	double getLength();
	void normalize();
	double setij(double i, double j);

	const Vector operator+(const Vector& other) const;
	const Vector operator-(const Vector& other) const;
	const Vector operator*(const Vector& other) const;
	const Vector operator*(const double& other) const;//Скалярное произведение
	const Vector operator/(const Vector& other) const;
	const bool operator>(const Vector& other) const;
	const bool operator<(const Vector& other) const;
	friend std::ostream& operator<<(std::ostream& out, const Vector& val);
};

#endif