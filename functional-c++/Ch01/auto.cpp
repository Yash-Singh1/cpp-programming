#include <iostream>
#include <typeinfo>

// Below are three ways to specify the function typings
// int add(int i, int j) {
// auto add(int i, int j) {
auto add(int i, int j) -> int {
    return i + j;
}

// int main() {
auto main() -> int {
    std::cout << "[auto.cpp]" << std::endl;

    auto a = 1;
    auto b = 1.0;
    auto c = a + b;
    auto d = {b, c};

    std::cout << "type of a: " << typeid(a).name() << std::endl;
    std::cout << "type of b: " << typeid(b).name() << std::endl;
    std::cout << "type of c: " << typeid(c).name() << std::endl;
    std::cout << "type of d: " << typeid(d).name() << std::endl;

    // return 0; isn't required with the auto function declaration of main
    return 0;
}
