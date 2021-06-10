#include<iostream>
#include<vector>
#include"ParkingLot.h"

using namespace std;

int Vehicle::getSpotsNeeded()
{
	return spotsNeeded;
}

VehicleSize Vehicle::getSize()
{
	return size;
}

void Vehicle::parkInSpot(ParkingSpot *spot)
{
	parkingSpots.push_back(spot);
}

void Vehicle::clearSpots()
{
	for (unsigned int i = 0; i < parkingSpots.size(); i++) {
		parkingSpots[i]->removeVehicle();
	}
	parkingSpots.clear();
}

Car::Car()
{
	spotsNeeded = 1;
	size = VehicleSize::Compact;
}

bool Car::canFitInSpot(ParkingSpot *spot)
{
	return spot->getSize() == VehicleSize::Large || spot->getSize() == VehicleSize::Compact;
}

void Car::print()
{
	cout << "C";
}


Bus::Bus()
{
	spotsNeeded = 5;
	size = VehicleSize::Large;
}

bool Bus::canFitInSpot(ParkingSpot *spot)
{
	return spot->getSize() == VehicleSize::Large;
}

void Bus::print()
{
	cout << "B";
}


Motorcycle::Motorcycle()
{
	spotsNeeded = 1;
	size = VehicleSize::Bike;
}

bool Motorcycle::canFitInSpot(ParkingSpot *spot)
{
	return true;
}

void Motorcycle::print()
{
	cout << "M";
}


