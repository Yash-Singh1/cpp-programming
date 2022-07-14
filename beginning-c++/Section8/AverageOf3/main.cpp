#include <iostream>

using namespace std;

int main()
{
	int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};
    
    cout << "Enter three integers seperated by a space: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    
    double average {0.0};
    
    average = static_cast<double>(total) / count;
//    average = (double)total / count; // Older C casting
    
    cout << "The three numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the 3 numbers was: " << total << endl;
    cout << "The average of the 3 numbers is: " << average << endl;
    
    cout << endl;
    return 0;
}
