#include <vector>
#include <algorithm>
#include <iostream>

// The reason I am include a cpp file is that we are building with clang here so we don't look at every file
#include "vehicle/vehicle.cpp"

using namespace std;

bool TwoWheeled(const Vehicle &vehicle) {
  return vehicle.GetNumOfWheel() == 2 ? true : false;
}

auto main() -> int {
  cout << "[find.cpp]" << endl;

  Vehicle car("car", 4);
  Vehicle motorcycle("motorcycle", 2);
  Vehicle bicycle("bicycle", 2);
  Vehicle bus("bus", 6);
  vector<Vehicle> vehicles = { car, motorcycle, bicycle, bus };

  cout << "All Vehicles:" << endl;
  for (auto v: vehicles) {
    std::cout << v.GetType() << endl;
  }
  std::cout << endl;

  cout << "Two-wheeled vehicle(s):" << endl;
  // Move to first qualifying one
  auto tw = find_if(
    begin(vehicles),
    end(vehicles),
    TwoWheeled
  );
  // While we aren't at the end
  while (tw != end(vehicles)) {
    // Print current one
    cout << tw->GetType() << endl;
    // Move to next qualifying one
    tw = find_if(++tw, end(vehicles), TwoWheeled);
  }
  cout << endl;

  // Same thing but negated
  cout << "Not the two-wheeled vehicle(s):" << endl;
  auto ntw = find_if_not(
    begin(vehicles),
    end(vehicles),
    TwoWheeled
  );
  while (ntw != end(vehicles)) {
    cout << ntw->GetType() << endl;
    ntw = find_if_not(
      ++ntw,
      end(vehicles),
      TwoWheeled
    );
  }

  return 0;
}
