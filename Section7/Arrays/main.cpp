#include <iostream>

using namespace std;

int main()
{
	char vowels[] {'a', 'e', 'i', 'o', 'u'};
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
//    cin >> vowels[5];
// The above will crash the application due to out of bounds error.

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    cout << "\nThe high temperature is: " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;
    
    cout << "The high temperature is now: " << hi_temps[0] << endl;
    
    int test_scores [3] {};

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    
    cout << "\nNotice the value of array: " << test_scores << endl;
    
    return 0;
}
