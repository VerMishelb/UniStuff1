#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

struct Complex {
	Complex();
	~Complex();
	Complex(double _re, double _im);
	//Complex(const Complex& other);

	void Display() const;
	double Length() const;

	double im = 0, re = 0;
	const Complex operator+(const Complex& n2) const;
	const Complex operator-(const Complex& n2) const;
	const Complex operator*(const Complex& n2) const;
	const Complex operator/(const Complex& n2) const;
	const bool operator>(const Complex& n2) const;
	const bool operator<(const Complex& n2) const;
	friend std::ostream& operator<<(std::ostream& out, const Complex& val);
};

#endif // !COMPLEX_H
