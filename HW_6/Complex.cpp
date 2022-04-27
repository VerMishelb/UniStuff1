#include "Complex.h"
#include <iostream>
#include <iomanip>

Complex::Complex() {}
Complex::~Complex() {}
Complex::Complex(double _re, double _im) : re(_re), im(_im) {}

void Complex::Display() const {
    std::ios_base::fmtflags old_flags = std::cout.flags();
    std::cout << re << std::showpos << im << "i\n";
    std::cout.unsetf(0xFFFFFFFF);
    std::cout.setf(old_flags);
}

double Complex::Length() const {
    return sqrt(re * re + im * im);
}

double Complex::getRe() {
    return re;
}
void Complex::setRe(const double& val) {
    re = val;
}

double Complex::getIm() {
    return im;
}
void Complex::setIm(const double& val) {
    im = val;
}


const Complex Complex::operator+(const Complex& n2) const {
    return Complex(re + n2.re, im + n2.im);
}
const Complex Complex::operator-(const Complex& n2) const {
    return Complex(re - n2.re, im - n2.im);
}
const Complex Complex::operator*(const Complex& n2) const {
    return Complex(
        re * n2.re - im * n2.im,
        re * n2.im + n2.re * im
    );
}
const Complex Complex::operator/(const Complex& n2) const {
    return Complex(
        (re * n2.re + im * n2.im) / (n2.re * n2.re + n2.im * n2.im),
        (n2.re * im - re * n2.im) / (n2.re * n2.re + n2.im * n2.im)
    );
}
bool Complex::operator>(const Complex& n2) const {
    return n2 < *this;
}
bool Complex::operator<(const Complex& n2) const {
    return Length() < n2.Length();
}
std::ostream& operator<<(std::ostream& out, const Complex& val) {
    std::ios_base::fmtflags old_flags = out.flags();
    out << val.re << std::showpos << val.im << 'i';
    out.unsetf(0xFFFFFFFF);
    out.setf(old_flags);
    return out;
}