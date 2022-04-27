#include "Circle.h"

Circle::Circle() {}
Circle::Circle(const double& _r) : r(_r) {}
Circle::Circle(const Circle& other) : r(other.r) {}
Circle::~Circle() {}

double Circle::getArea() {
    return Pi * r * r;
}

double Circle::getPerimeter() {
    return 2 * Pi * r;
}

void Circle::setRadius(const double& v) {
    r = v;
}

double Circle::getRadius() {
    return r;
}


const Circle Circle::operator+(const Circle& other) const {
    return Circle(r + other.r);
}
const Circle Circle::operator-(const Circle& other) const {
    return Circle(r - other.r);
}
Circle& Circle::operator=(const double& other) {
    this->r = other;
    return *this;
}
bool Circle::operator>(const Circle& other) const {
    return other < *this;
}
bool Circle::operator<(const Circle& other) const {
    return r < other.r;
}
Circle::operator double() const {
    return r;
}
std::ostream& operator<<(std::ostream& out, const Circle& val) {
    out << val.r;
    return out;
}