#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle {
    double r = 0;

public:
    Circle();
    ~Circle();
    Circle(double r);
    Circle(const Circle& other);
    
    const double Pi = 3.141592653589793;

    const Circle operator+(const Circle& other) const;
    const Circle operator-(const Circle& other) const;
    const Circle& operator=(const double& other) const;
    const bool operator>(const Circle& other) const;
    const bool operator<(const Circle& other) const;
    friend std::ostream& operator<<(std::ostream& out, const Circle& val);

    double getArea();
    double getPerimeter();
    void setRadius(double v);
    double getRadius();
};

#endif // !CIRCLE_H
