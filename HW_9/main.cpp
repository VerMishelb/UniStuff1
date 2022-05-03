#include <iostream>
#include "Car.h"
#include "Apartment.h"
#include "CountryHouse.h"


int main() {
	Property* property_arr[7]{};
	for (int i = 0; i < 3; ++i) {
		property_arr[i] = new Apartment{ double(500 + 120 * i) };
	}
	for (int i = 3; i < 5; ++i) {
		property_arr[i] = new Car{ double(120 + 15 * i) };
	}
	for (int i = 5; i < 7; ++i) {
		property_arr[i] = new CountryHouse{ double(1200 + 180 * i) };
	}

	for (int i = 0; i < 7; ++i) {
		std::cout << i << ". Tax = " << property_arr[i]->GetTax() << " (cost = " << property_arr[i]->cost << ")\n";
		delete property_arr[i];
	}

	return 0;
}