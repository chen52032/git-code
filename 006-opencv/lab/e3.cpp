#include "complex.hpp"
#include <iostream>

int main(){
    complex a(3,4);
    complex b(2,6);
    std::cout << std::fixed;
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a + 2 = " << a + 2 << "\n";
    std::cout << "2 + a = " << 2 + a << "\n";
    std::cout << "=====================================" << "\n";

    complex c = b;
    std::cout << "c = " << c << "\n";
    std::cout << std::boolalpha;
    std::cout << "b == c ? " << (b==c) << "\n";
    std::cout << "=====================================" << "\n";
    complex d;
    std::cout << "input real and imag" << "\n";
    std::cin >> d;
    std::cout << d;
}