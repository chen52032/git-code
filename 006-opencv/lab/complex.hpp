#pragma once
#include <iostream>

class complex{
    private:
        double real;
        double imag;
    public:
        complex(double r=0, double i=0): real(r), imag(i){}
        friend std::ostream & operator<<(std::ostream & out, const complex & c){
            std::string str = std::to_string(c.real) + "+" + std::to_string(c.imag) + "i";
            out << str;
            return out;
        }
        complex operator+(double d){
            return complex(this->real + d, this->imag);
        }
        complex operator+(complex & c){
            return complex(this->real + c.real, this->imag + c.imag);
        }
        friend complex operator+(double d, complex & c){
            return complex(c.real + d, c.imag);
        }
        bool operator==(const complex & c){
            return this->real == c.real && this->imag == c.imag;
        }
        friend std::istream & operator>>(std::istream & in, complex & c){
            in >> c.real >> c.imag;
            return in;
        }
};