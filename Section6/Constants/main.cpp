// Section 6
// Constants

/* 
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Estimate for carpet cleaning service:" << endl;
    cout << "\nNumber of rooms: ";
    
    unsigned short rooms {0};
    cin >> rooms;
    
    const unsigned short price_per_room {20};
    const float tax_rate {0.06};
    const unsigned short validity {30};

    cout << "Price per room: $20" << endl;
    cout << "Cost: $" << (price_per_room * rooms) << endl;
    cout << "Tax: $" << (price_per_room * rooms * tax_rate) << endl;
    cout << "Estimate: $" << (price_per_room * rooms) + (price_per_room * rooms * tax_rate) << endl;
    cout << "This estimate will expire in " << validity << " days." << endl;

    cout << endl;
    return 0;
}
