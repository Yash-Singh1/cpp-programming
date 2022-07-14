// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: ";
    int small_rooms {0};
    cin >> small_rooms;
    cout << "Number of large rooms: ";
    int large_rooms {0};
    cin >> large_rooms;

    const unsigned short price_per_small_room {25};
    const unsigned short price_per_large_room {35};
    const float tax_rate {0.06};
    const unsigned short validity {30};

    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << (small_rooms * price_per_small_room) + (large_rooms * price_per_large_room) << endl;
    cout << "Tax: $" << ((small_rooms * price_per_small_room) + (large_rooms * price_per_large_room)) * tax_rate << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << ((small_rooms * price_per_small_room) + (large_rooms * price_per_large_room)) * tax_rate + (small_rooms * price_per_small_room) + (large_rooms * price_per_large_room) << endl;
    cout << "This estimate is valid for " << validity << " days" << endl;
 
    cout << endl;
    return 0;
}
