cmake_minimum_required(VERSION 3.16)
project(AutomatedCarPark)
set(my_includes "Vehicle.h") 
set(my_cpps "AutomatedCarPark.cpp" "ParkingLot.cpp" "Level.cpp" "Vehicle.cpp"  "ParkingSpot.cpp" )
add_executable(AutomatedCarPark ${my_includes} ${my_cpps}) 
include_directories("./includes")
