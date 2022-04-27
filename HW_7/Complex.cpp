#include "Complex.h"
#include <iostream>
#include <iomanip>

Complex::Complex() { printf_s("default constructor\n"); }
Complex::Complex(double _re, double _im) : re(_re), im(_im) { printf_s("param constructor\n"); }
Complex::Complex(double _re) : Complex(_re, 0) { printf_s("deleg constructor\n"); }
Complex::Complex(const Complex& other) : re(other.re), im(other.im) { printf_s("copy constructor\n"); }
Complex::Complex(Complex&& other) noexcept : re(0), im(0) {
    /*
    re = other.re;
    other.re = 0;
    */
    printf_s("move constructor\n");
    re = std::move(other.re);
    im = std::move(other.im);
}
Complex::~Complex() { /* Нечего удалять */ printf_s("destructor\n"); }

void Complex::display() const {
    std::ios_base::fmtflags old_flags = std::cout.flags();
    std::cout << re << std::showpos << im << "i\n";
    std::cout.unsetf(0xFFFFFFFF);
    std::cout.setf(old_flags);
}

double Complex::length() const {
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
Complex Complex::getMultiplied(const Complex& val) {
    Complex c;
    c.re = val.re * 2;
    c.im = val.im * 2;
    return c;
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
    return length() < n2.length();
}
std::ostream& operator<<(std::ostream& out, const Complex& val) {
    std::ios_base::fmtflags old_flags = out.flags();
    out << val.re << std::showpos << val.im << 'i';
    out.unsetf(0xFFFFFFFF);
    out.setf(old_flags);
    return out;
}