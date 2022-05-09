#include <iostream>
#include "Boss.h"
#include "Student.h"


int main() {
    Boss boss("Surname", "Name", "Midname", 35, 70);
    Student stud("Studentovich", "Student", "Studenevski", 20, true);

    boss.print();
    std::putchar('\n');
    stud.print();
}