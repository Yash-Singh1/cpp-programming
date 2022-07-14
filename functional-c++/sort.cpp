#include <vector>
#include <algorithm>
#include <iostream>

bool comparer(int a, int b) {
    return (a > b);
}

auto main() -> int {
    std::cout << "[sort.cpp]" << std::endl;
    std::vector<int> vect = { 20, 43, 11, 78, 5, 96 };
    std::cout << "Original Data : ";
    for (auto v: vect) {
        std::cout << v << " ";
    }
    std::cout << std::endl;
    std::sort(std::begin(vect), std::end(vect));
    std::cout << "Ascending Sorted : ";
    for (auto v: vect) {
        std::cout << v << " ";
    }
    std::cout << std::endl;
    std::sort(std::begin(vect), std::end(vect), comparer);
    std::cout << "Descending Sorted : ";
    for (auto v: vect) {
        std::cout << v << " ";
    }
    std::cout << std::endl;
    return 0;
}
