#include <iostream>

void funct(const char *a);
void funct(int a) {
    std::cout << a << std::endl;
}

auto main() -> int {
    std::cout << "[nullptr.cpp]" << std::endl;

    // Would expect to run on first overload of pointer but runs on both because is pointer and 0 as integer
    funct(NULL);

    // Runs on the expected declaration taking a pointer
    funct(nullptr);
}
