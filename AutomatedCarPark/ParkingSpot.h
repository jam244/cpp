#ifndef __PARKINGSPOT_H__
#define __PARKINGSPOT_H__


class Vehicle;
class Level;

enum VehicleSize {
	Bike,
	Compact,
	Large,
};


/* ParkingSpot handles  different parking spot sizes */
class ParkingSpot
{
	Vehicle *vehicle;
	VehicleSize spotSize;
	int row;
	int spotNumber;
	Level *level;
public:
	ParkingSpot(Level *lvl, int r, int n, VehicleSize sz);
	bool isAvailable();
	bool canFitVehicle(Vehicle *vehicle);
	bool park(Vehicle *v);
	void removeVehicle();
	int getRow();
	VehicleSize getSize();
	void print();

};

#endif