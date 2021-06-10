#include<iostream>

#include"ParkingLot.h"

using namespace std;

ParkingSpot::ParkingSpot(Level *lvl, int r, int n, VehicleSize sz)
{
	level = lvl;
	row = r;
	spotNumber = n;
	spotSize = sz;
}

bool ParkingSpot::isAvailable()
{
	return vehicle == nullptr;
}

bool ParkingSpot::canFitVehicle(Vehicle *vehicle)
{
	return isAvailable() && vehicle->canFitInSpot(this);
}

bool ParkingSpot::park(Vehicle *v)
{
	if (!canFitVehicle(v)) {
		return false;
	}
	vehicle = v;
	vehicle->parkInSpot(this);
	return true;
}

void ParkingSpot::removeVehicle()
{
	//cout << "Removing spot from row:" << row << endl;
	level->spotFreed();
	vehicle = nullptr;
}

int ParkingSpot::getRow()
{
	return row;
}

VehicleSize ParkingSpot::getSize() {
	return spotSize;
}

void ParkingSpot::print()
{
	if (vehicle == nullptr) {
		if (spotSize == VehicleSize::Compact) {
			cout << "c";
		}
		else if (spotSize == VehicleSize::Large) {
			cout << "l";
		}
		else if (spotSize == VehicleSize::Bike) {
			cout << "b";
		}
	}
	else {
		vehicle->print();
	}
}