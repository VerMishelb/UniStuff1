#include "CountryHouse.h"

CountryHouse::CountryHouse(double cost) : Property(cost) {}

double CountryHouse::GetTax() {
	return (cost / 500.0);
}