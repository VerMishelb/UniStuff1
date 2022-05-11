#ifndef EQUATION_H
#define EQUATION_H

class Equation {
public:
	static void solve(double a = 4.6, double b = 1.5);
private:
	static void solveT();
	static void solveY();
	static const double solveT1();
	static const double solveT2();
	static const double solveT3();
	static const double solveY1();
	static const double solveY2();

	static double a, b, y, t;
};

#endif