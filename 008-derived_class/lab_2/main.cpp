#include <iostream>
#include "Polygon.hpp"

int main(){
    Rectangle rect;
    Triangle trgl;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    ppoly1->set_values(4,5);
    ppoly2->set_values(2,5);
    std::cout << "Area of rectangle: " << ppoly1->area() << std::endl;
    std::cout << "Area of triangle: " << ppoly2->area() << std::endl;
}