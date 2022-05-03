#include "Car.h"

Car::Car(double cost) : Property(cost) {}

double Car::GetTax() {
	return (cost / 200.0);
}