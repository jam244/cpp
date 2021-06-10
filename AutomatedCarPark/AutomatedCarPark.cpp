#include<iostream>
#include<vector>
#include"ParkingLot.h"
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	ParkingLot *lot = new ParkingLot();
	vector<Vehicle *> parked_vehicles;

	Vehicle *v = nullptr;
	while (v == nullptr || lot->parkVehicle(v)) {
		lot->print();

		this_thread::sleep_for(chrono::seconds(4));
		int r = rand() % (10 - 0 + 1) + 0;
		//cout << "random number: " << r << endl;
		if (0 <= r && r <= 2) 
		{
			cout << "Parking a Bus: ";
			v = new Bus();
		}
		else if (2 <= r && r <=4)
		{
			cout << "Parking a Motorcyle: ";
			v = new Motorcycle();
		}
		else if (4 <= r && r <=6){
			cout << "Parking a Car: ";
			v = new Car();
		}
		else
		{
			if (!parked_vehicles.empty())
			{
				cout << "Remove a vehicle: ";
				v = parked_vehicles.back();
				parked_vehicles.pop_back();
				v->print();
				cout<< endl;
				v->clearSpots();
				v=nullptr;
			}

		}
		
		if (r <= 6)
		{
			v->print();
			parked_vehicles.push_back(v);
			cout << endl;
		}
	}
	cout << "Parking Failed for";
	v->print();
	lot->print();

	cin.get();
	return 0;

}