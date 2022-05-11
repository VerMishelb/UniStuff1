#include <cmath>
#include <iostream>
#include "Equation.h"

double Equation::a{ 0 };
double Equation::b{ 0 };
double Equation::y{ 0 };
double Equation::t{ 0 };

void Equation::solve(double a_, double b_) {
	a = a_;
	b = b_;
	y = 0;
	t = 0;

	solveY();
	solveT();

	std::printf(
		"a = %.5f\n"
		"b = %.5f\n"
		"y = %.5f\n"
		"t = %.5f\n",
		a, b, y, t
	);

	return;
}

void Equation::solveT() {
	if (y == b) { t = solveT1(); }
	else if (y < b) { t = solveT2(); }
	else { t = solveT3(); }
}

void Equation::solveY() {
	if (a <= b) { y = solveY1(); }
	else { y = solveY2(); }
}

const double Equation::solveT1() {
	return (
		(2 * y + std::sqrt(y * y - a))
		/
		(2 * b - std::sqrt(a * a - y))

		);
}

const double Equation::solveT2() {
	double t_siny = std::sin(y);
	return (
		t_siny * t_siny + (1 / std::tan(a - b))
		);
}

const double Equation::solveT3() {
	return (
		std::cbrt(y * std::sin(a)) + (1 / std::sqrt(y * std::cos(b)))
		);
}

const double Equation::solveY1() {
	return (
		((a - b) / (a + b)) * ((a + b) / (a * a - a * b + b * b))
		);
}

const double Equation::solveY2() {
	return (
		a + std::log(b * b)
		);
}