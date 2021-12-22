#include <iostream>

int main()
{
    const double usd_per_euros {1.13};
    
	std::cout << "Welcome to Euro to USD converter" << std::endl;
    std::cout << "\nEnter your value in EUR: ";
    
    int euros {0};
    std::cin >> euros;
    
    std::cout << euros << " EUR is equivalent to $" << (usd_per_euros * euros) << " USD" << std::endl;
    
    return 0;
}
