#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

class Vector {
public:
	Vector();
	Vector(double i);
	Vector(double i, double j);
	Vector(double i, double j, double k);
	Vector(const Vector& other) = default;
	~Vector();

	double getLength() const;
	void normalize();

	const Vector operator+(const Vector& other) const;
	const Vector operator-(const Vector& other) const;
	const Vector operator*(const Vector& other) const;
	const Vector operator*(const double& other) const;
	friend const double operator*(const Vector& left, const Vector& right);//скалярное
	const Vector operator/(const double& other) const;
	Vector& operator=(const Vector& other) = default;
	bool operator>(const Vector& other) const;
	bool operator<(const Vector& other) const;
	friend std::ostream& operator<<(std::ostream& out, const Vector& val);
	double i = 0, j = 0, k = 0;
};

#endif