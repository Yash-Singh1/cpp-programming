#include <vector>
#include <algorithm>
#include <iostream>
#include "vehicle/vehicle.cpp"

using namespace std;

auto main() -> int
{
  cout << "[lambda_tiny_func.cpp]" << endl;

  Vehicle car("car", 4);
  Vehicle motorcycle("motorcycle", 2);
  Vehicle bicycle("bicycle", 2);
  Vehicle bus("bus", 6);
  vector<Vehicle> vehicles = {car, motorcycle, bicycle, bus};

  cout << "All Vehicles:" << endl;
  for_each(
      begin(vehicles),
      end(vehicles),
      [](const Vehicle &vehicle)
      {
        cout << vehicle.GetType() << endl;
      });

  return 0;
}
