#include "Apartment.h"

Apartment::Apartment(double cost) : Property(cost) {}

double Apartment::GetTax() {
	return (cost / 1000.0);
}