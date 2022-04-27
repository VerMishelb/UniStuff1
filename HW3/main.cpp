#include "Circle.h"
#include "Complex.h"
#include "Vector.h"

int main() {
    Circle t1, t2;
    t1 = 5, t2 = 3;
    printf("t1.r = %f; t1 = %f\nArea 1: %f\nArea 2: %f\nArea +: %f\n",
        t1.getRadius(), t2.getRadius(), t1.getArea(), t2.getArea(), t1.getArea() + t2.getArea());
    Circle t3 = t1 + t2;
    std::cout << "Circle t3 = " << t3 << '\n';

    Complex c1, c2;


    return 0;
}