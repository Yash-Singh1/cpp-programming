#include "vehicle.h"

using namespace std;

// Some places will use m_totalOfWheel instead for earlier than 1990s code readability
// My intellisense doesn't support it so omitting m_ prefix here

Vehicle::Vehicle() : totalOfWheel(0)
{
}

Vehicle::Vehicle(const string &type, int wheel) : vehicleType(type), totalOfWheel(wheel)
{
}

Vehicle::~Vehicle()
{
}
