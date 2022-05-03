#ifndef COUNTRYHOUSE_H
#define COUNTRYHOUSE_H

#include "Property.h"

class CountryHouse : public Property {
public:
	CountryHouse() = default;
	CountryHouse(double cost);
	~CountryHouse() = default;

	virtual double GetTax();
};

#endif // !COUNTRYHOUSE_H
