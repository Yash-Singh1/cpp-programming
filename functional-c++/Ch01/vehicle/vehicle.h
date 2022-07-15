#ifndef __VEHICLE_H__
#define __VEHICLE_H__

#include <string>

// Bad practice to use using namespace here because it exposes to users

class Vehicle {
  private:
    std::string vehicleType;
    int totalOfWheel;

  public:
    Vehicle(
      const std::string &type,
      int _wheel
    );
    Vehicle();
    ~Vehicle();
    std::string GetType() const {
      return vehicleType;
    }
    int GetNumOfWheel() const {
      return totalOfWheel;
    }
};

#endif
