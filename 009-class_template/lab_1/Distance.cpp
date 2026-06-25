#include "class.hpp"
#include <iostream>

int main() {
  Point a{8, 9}, b{1, 2};
  Point c = a;
  std::cout << "point a: " << "(" << a.getX() << ", " << a.getY() << ")"
            << "\n";
  std::cout << "point b: " << "(" << b.getX() << ", " << b.getY() << ")"
            << "\n";
  std::cout << "point c: " << "(" << c.getX() << ", " << c.getY() << ")"
            << "\n";

  std::cout << "\n=================================\n\n";
  Line line1(a, b);
  std::cout << "line1's distance: " << line1.getDistance() << "\n";
  Line line2(line1);
  std::cout << "line2's distance: " << line2.getDistance() << "\n";
}