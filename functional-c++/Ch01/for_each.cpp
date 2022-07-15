#include <vector>
#include <algorithm>
#include <iostream>

// The reason I am include a cpp file is that we are building with clang here so we don't look at every file
#include "vehicle/vehicle.cpp"

using namespace std;

bool TwoWheeled(const Vehicle &vehicle)
{
  return vehicle.GetNumOfWheel() == 2 ? true : false;
}

// Not gonna transform function, thats in Ch02
bool NotTwoWheeled(const Vehicle &vehicle)
{
  return vehicle.GetNumOfWheel() == 2 ? false : true;
}

void PrintOut(const Vehicle &vehicle)
{
  cout << vehicle.GetType() << endl;
}

auto main() -> int
{
  cout << "[find.cpp]" << endl;

  Vehicle car("car", 4);
  Vehicle motorcycle("motorcycle", 2);
  Vehicle bicycle("bicycle", 2);
  Vehicle bus("bus", 6);
  vector<Vehicle> vehicles = {car, motorcycle, bicycle, bus};

  cout << "All Vehicles:" << endl;
  for_each(begin(vehicles), end(vehicles), PrintOut);
  std::cout << endl;

  cout << "Two-wheeled vehicle(s):" << endl;
  vector<Vehicle> tw;
  // Copying into tw, could also use remove_if to remove from original
  copy_if(
      begin(vehicles),
      end(vehicles),
      std::back_inserter(tw),
      TwoWheeled);
  for_each(begin(tw), end(tw), PrintOut);
  cout << endl;

  // Same thing but negated
  cout << "Not the two-wheeled vehicle(s):" << endl;
  vector<Vehicle> ntw;
  // Copying into ntw
  copy_if(
      begin(vehicles),
      end(vehicles),
      std::back_inserter(ntw),
      NotTwoWheeled);
  for_each(begin(ntw), end(ntw), PrintOut);
  cout << endl;

  return 0;
}
