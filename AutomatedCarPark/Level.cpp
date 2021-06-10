#include<vector>
#include<iostream>
#include"ParkingLot.h"
using namespace std;


Level::Level(int flr, int numberOfSpots)
{
	floor = flr;
	parkingSpots.resize(numberOfSpots);
	int largeSpots = numberOfSpots / 4;

	for (int i = 0; i < numberOfSpots; i++)
	{
		VehicleSize size = Bike;
		if (i < (numberOfSpots - largeSpots))
		{
			size = Compact;
		}
		else
		{
			size = Large;
		}
		int row = i / spotsPerRow;
		parkingSpots[i] = new ParkingSpot(this, row, i, size);
	}
	availableSpots = numberOfSpots;
}

int Level::findAvailableSpots(Vehicle *vehicle)
{
	int spotsNeeded = vehicle->getSpotsNeeded();
	int lastRow = -1;
	int spotsFound = 0;
	for (unsigned int i = 0; i < parkingSpots.size(); i++) {
		ParkingSpot *spot = parkingSpots[i];
		if (lastRow != spot->getRow()) {
			spotsFound = 0;
			lastRow = spot->getRow();
		}
		if (spot->canFitVehicle(vehicle)) {
			spotsFound++;
		}
		else {
			spotsFound = 0;
		}
		if (spotsFound == spotsNeeded) {
			return i - (spotsNeeded - 1);
		}
	}
	return -1;
}

bool Level::parkVehicle(Vehicle *vehicle)
{
	if (availableSpots < vehicle->getSpotsNeeded()) {
		return false;
	}
	int spotNumber = findAvailableSpots(vehicle);
	if (spotNumber < 0) {
		return false;
	}
	return parkStartingAtSpot(spotNumber, vehicle);
}

bool Level::parkStartingAtSpot(int spotNumber, Vehicle *vehicle)
{
	vehicle->clearSpots();
	bool success = true;
	for (int i = spotNumber; i < spotNumber + vehicle->getSpotsNeeded(); i++) {
		success &= parkingSpots[i]->park(vehicle);
	}
	availableSpots -= vehicle->getSpotsNeeded();
	return success;
}




void Level::spotFreed()
{
	availableSpots++;
}

void Level::print()
{
	int lastRow = -1;
	for (unsigned int i = 0; i < parkingSpots.size(); i++) {
		ParkingSpot *spot = parkingSpots[i];
		if (spot->getRow() != lastRow) {
			cout << "  ";
			lastRow = spot->getRow();
		}
		spot->print();
	}
}