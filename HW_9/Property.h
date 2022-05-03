#ifndef PROPERTY_H
#define PROPERTY_H

class Property {
public:
	~Property() = default;
	virtual double GetTax() = 0;

	double cost{ 0 };

protected:
	Property() = default;
	Property(double cost);
};

#endif // !PROPERTY_H
