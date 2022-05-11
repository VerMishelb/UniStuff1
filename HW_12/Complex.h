#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

struct Complex {
    Complex();
    Complex(double _re, double _im);
    ~Complex();

    void Display() const;
    double Length() const;
    double getRe();
    void setRe(const double& val);
    double getIm();
    void setIm(const double& val);

    const Complex operator+(const Complex& n2) const;
    const Complex operator-(const Complex& n2) const;
    const Complex operator*(const Complex& n2) const;
    const Complex operator/(const Complex& n2) const;
    bool operator>(const Complex& n2) const;
    bool operator<(const Complex& n2) const;
    friend std::ostream& operator<<(std::ostream& out, const Complex& val);

    double im{ 0 }, re{ 0 };
};

#endif // !COMPLEX_H