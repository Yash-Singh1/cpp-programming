#include <iostream>

const int func1();
const int& func2();
int i;

struct X {
    double d;
};
const X* x = new X();

decltype(func1()) a; // const int
decltype(func2()) b = a; // const int&
decltype(i) c; // int
decltype(x->d) d1; // double
decltype((x->d)) d2 = d1; // const double&

// Similar to typeof in typescript is decltype
// Below is the common usecase of the arrow operator for return type
template<typename I, typename J>
auto add(I i, J j) -> decltype(i + j) {
    return i + j;
}

auto main() -> int {
    std::cout << "[decltype.cpp]" << std::endl;

    // Infered parameters to template
    // auto d = add<int, double>(2, 2.5);
    auto d = add(2, 2.5);
    std::cout << "result of 2 + 2.5: " << d << std::endl;

    return 0;
}
