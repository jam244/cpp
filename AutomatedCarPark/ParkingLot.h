#pragma once

#include<vector>
#include "Vehicle.h"
#include "ParkingSpot.h"

using namespace std;

/*
An Automated Parking lot implementation.

Design:

Parking lot has multiple levels. Each levels have multiple rows of spots.

Parking lot can park motorcycles, cars and buses

Parking lot has compact spots and large spots.

1/4th of parking spots are large parking spots

Motorcycle can park in any spot.

Car can pack in compact spot

Bus can park in 5 large spots.

ParkingLot consists of levels
Levels consist of ParkingSpots
ParkingSpots can be Compact or Large
ParkingSpots are organized as group of 10 indicating a row


*/


class Vehicle;
class Level;


class Car : public Vehicle
{
public:
	Car();
	bool canFitInSpot(ParkingSpot *spot);
	void print();
};

class Bus : public Vehicle
{
public:
	Bus();
	bool canFitInSpot(ParkingSpot *spot);
	void print();
};

class Motorcycle : public Vehicle
{
public:
	Motorcycle();
	bool canFitInSpot(ParkingSpot *spot);
	void print();
};


class Level
{
	int floor;
	vector<ParkingSpot*> parkingSpots;
	int availableSpots;
	const int spotsPerRow = 10;
public:
	Level(int flr, int numberOfSpots);
	int getAvailableSpots() { return availableSpots; }
	int findAvailableSpots(Vehicle *vehicle);
	bool parkVehicle(Vehicle *vehicle);
	bool parkStartingAtSpot(int spotNumber, Vehicle *vehicle);
	void spotFreed();
	void print();

};

/*Parking lot wraps levels.*/
class ParkingLot
{
	vector<Level*> levels;
	const int numberOfLevels = 5;
public:
	ParkingLot();
	bool parkVehicle(Vehicle *vehicle);
	void print();
};

