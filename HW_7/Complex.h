#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

struct Complex {
    Complex();//По умолчанию
    Complex(double _re, double _im);//С параметрами
    explicit Complex(double _re);//Делегирующий
    Complex(const Complex& other);//Копирования
    /* VS ругается: Эта функция не может "throw", объявите её как "noexcept" (f.6) */
    Complex(Complex&& other) noexcept;//Перемещения
    ~Complex();//Деструктор

    void display() const;
    double length() const;
    double getRe();
    void setRe(const double& val);
    double getIm();
    void setIm(const double& val);
    static Complex getMultiplied(const Complex& val);

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