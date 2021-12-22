#include <iostream>

using namespace std;

int main()
{
    int cents;
	cout << "Enter an amount of cents: ";
    cin >> cents;
    
    int dollars {static_cast<int>(static_cast<float>(cents) / 100)};
    cents %= 100;
    cout << "dollars: " << dollars << endl;
    
    int quarters {static_cast<int>(static_cast<float>(cents) / 25)};
    cents %= 25;
    cout << "quarters: " << quarters << endl;
    
    int dimes {static_cast<int>(static_cast<float>(cents) / 10)};
    cents %= 10;
    cout << "dimes: " << dimes << endl;
    
    int nickels {static_cast<int>(static_cast<float>(cents) / 5)};
    cents %= 5;
    cout << "nickels: " << nickels << endl;
    
    cout << "pennies: " << cents << endl;
    
    cout << endl;
    return 0;
}
