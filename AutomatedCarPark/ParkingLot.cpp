#include<iostream>
#include"ParkingLot.h"

using namespace std;

ParkingLot::ParkingLot()
{
	levels.resize(numberOfLevels);
	for (int i = 0; i < numberOfLevels; i++) {
		levels[i] = new Level(i, 30);
	}
}


bool ParkingLot::parkVehicle(Vehicle *vehicle)
{
	for (unsigned int i = 0; i < levels.size(); i++) {
		if (levels[i]->parkVehicle(vehicle)) {
			return true;
		}
	}
	return false;
}

void ParkingLot::print()
{
	for (unsigned int i = 0; i < levels.size(); i++) {
		cout << "Level " << i << ": ";
		levels[i]->print();
		cout << endl;
	}
	cout << endl;
}
