#ifndef EQUATION_H
#define EQUATION_H

static class Equation {
public:
	void solve(double a = 4.6, double b = 1.5);
private:
	double solveY1();
	double solveY2();
	double solveT1();
	double solveT2();
	double solveT3();

	double a = 4.6, b = 1.5, y = 0, t = 0;
};

#endif