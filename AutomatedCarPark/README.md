# An Automated Parking lot implementation in C++. 

Implemented in **Unubuntu 20.04**  environment and built with cmake.

## Design:

- Parking lot has multiple levels. Each levels have multiple rows of spots.

- Parking lot can park motorcycles, cars and buses

- Parking lot has compact spots and large spots.

- 1/4th of parking spots are large parking spots

- Motorcycle can park in any spot.

- Car can pack in compact spot

- Bus can park in 5 large spots.

- ParkingLot consists of levels.

- Levels consist of ParkingSpots.

- ParkingSpots can be Compact or Large.

- ParkingSpots are organized as group of 10 indicating a row.  

## Build Instructions:
cmake .  
make

## Sample Output:

$ ./AutomatedCarPark  
Level 0:   cccccccccc  cccccccccc  ccclllllll   
Level 1:   cccccccccc  cccccccccc  ccclllllll  
Level 2:   cccccccccc  cccccccccc  ccclllllll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Car: C  
Level 0:   Cccccccccc  cccccccccc  ccclllllll  
Level 1:   cccccccccc  cccccccccc  ccclllllll  
Level 2:   cccccccccc  cccccccccc  ccclllllll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Remove a vehicle: C  
Level 0:   cccccccccc  cccccccccc  ccclllllll  
Level 1:   cccccccccc  cccccccccc  ccclllllll  
Level 2:   cccccccccc  cccccccccc  ccclllllll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Car: C  
Level 0:   Cccccccccc  cccccccccc  ccclllllll  
Level 1:   cccccccccc  cccccccccc  ccclllllll  
Level 2:   cccccccccc  cccccccccc  ccclllllll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Bus: B  
Level 0:   Cccccccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  ccclllllll  
Level 2:   cccccccccc  cccccccccc  ccclllllll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Bus: B  
Level 0:   Cccccccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  ccclllllll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Motorcyle: M  
Level 0:   CMcccccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  ccclllllll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Bus: B  
Level 0:   CMcccccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  cccBBBBBll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Car: C  
Level 0:   CMCccccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  cccBBBBBll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Motorcyle: M  
Level 0:   CMCMcccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  cccBBBBBll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Bus: B  
Level 0:   CMCMcccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  cccBBBBBll  
Level 3:   cccccccccc  cccccccccc  cccBBBBBll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Remove a vehicle: B  
Level 0:   CMCMcccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  cccBBBBBll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Remove a vehicle: M  
Level 0:   CMCccccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  cccBBBBBll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  

Parking a Car: C  
Level 0:   CMCCcccccc  cccccccccc  cccBBBBBll  
Level 1:   cccccccccc  cccccccccc  cccBBBBBll  
Level 2:   cccccccccc  cccccccccc  cccBBBBBll  
Level 3:   cccccccccc  cccccccccc  ccclllllll  
Level 4:   cccccccccc  cccccccccc  ccclllllll  



