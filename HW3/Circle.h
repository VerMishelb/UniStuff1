#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle {
private:
    double r = 0;

public:
    Circle();
    Circle(const double& r);
    Circle(const Circle& other);
    ~Circle();
    
    const Circle operator+(const Circle& other) const;
    const Circle operator-(const Circle& other) const;
    Circle& operator=(const double& other);
    Circle& operator=(const Circle& other) = default;
    bool operator>(const Circle& other) const;
    bool operator<(const Circle& other) const;
    operator double() const;
    friend std::ostream& operator<<(std::ostream& out, const Circle& val);

    double getArea();
    double getPerimeter();
    void setRadius(const double& v);
    double getRadius();
    
    const double Pi = 3.141592653589793;
};

#endif // !CIRCLE_H
