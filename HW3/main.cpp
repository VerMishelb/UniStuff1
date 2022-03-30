#include "Circle.h"

int main() {
    Circle t1, t2;
    t1 = 5., t2 = 3;
    printf("%d %d", t1.getRadius(), t2.getRadius());
    std::cout << "Area 1: " << t1.getArea() << "\nArea 2: " << t2.getArea() << "\n+: " <<
        t1.getArea() + t2.getArea() << '\n';

    return 0;
}