#include "Polygon_print.hpp"

int main() {
    Polygon * pploy = new Rectangle(4,5);
    pploy->printarea();
    delete pploy;
    pploy = new Triangle(2,5);
    pploy->printarea();

}