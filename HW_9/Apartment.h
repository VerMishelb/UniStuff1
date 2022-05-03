#ifndef APARTMENT_H
#define APARTMENT_H

#include "Property.h"

class Apartment : public Property {
public:
	Apartment() = default;
	Apartment(double cost);
	~Apartment() = default;

	virtual double GetTax();
};

#endif