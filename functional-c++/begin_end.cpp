#include <iostream>

auto main() -> int {
    std::cout << "[begin_end.cpp]" << std::endl;

    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::cout << "Displaying array elements using conventional for-loop";
    std::cout << std::endl;
    for (unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Displaying array elements using non-member begin() and end()";
    std::cout << std::endl;
    for (auto i  = std::begin(arr); i != std::end(arr); ++i) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    std::cout << "Displaying array elements using range-based for loop";
    std::cout << std::endl;
    for (auto el: arr) {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    return 0;
}
