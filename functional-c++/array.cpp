#include <array>
#include <iostream>

auto main() -> int {
    std::cout << "[array.cpp]" << std::endl;
    std::array<int, 10> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "Original Data : ";
    for (auto el: arr) std::cout << el << " ";
    std::cout << std::endl;
    arr[1] = 9;
    arr[3] = 7;
    std::cout << "Manipulated Data : ";
    for (auto el: arr) std::cout << el << " ";
    std::cout << std::endl;
    return 0;
}
