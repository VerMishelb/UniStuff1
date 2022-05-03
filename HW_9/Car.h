#ifndef CAR_H
#define CAR_H

#include "Property.h"

class Car : public Property {
public:
	Car() = default;
	Car(double cost);
	~Car() = default;

	virtual double GetTax();
};


#endif // !CAR_H
