#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include "ParkingSpot.h"
#include <vector>

using namespace std;

/*Abstract class vehicle*/
class Vehicle
{
public:
	int getSpotsNeeded();
	VehicleSize getSize();
	void parkInSpot(ParkingSpot *spot);
	void clearSpots();
	virtual bool canFitInSpot(ParkingSpot *spot) = 0;
	virtual void print() = 0;

protected:
	vector<ParkingSpot*> parkingSpots;
	int spotsNeeded;
	VehicleSize size;
};

#endif