#pragma once
#include <iostream>

class root{
    private:
        double real;
        double imag;
    public:
        root():real(0),imag(0){}
        root(double r1, double r2):real(r1),imag(r2){}
        static root add(const root root_1, const root root_2){
            root a{root_1.real+root_2.real, root_1.imag+root_2.imag};
            return a;
        }
        void info() const {
            std::cout << real << '+' << imag << 'i' << '\n';
        }
};