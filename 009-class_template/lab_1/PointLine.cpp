#include "class.hpp"
#include <cmath>

Point::Point(double newX, double newY) : x(newX), y(newY) {}
Point::Point(const Point &p) : x(p.x), y(p.y) {}
double Point::getX() const { return x; }
double Point::getY() const { return y; }

Line::Line(Point xp1, Point xp2) : p1(xp1), p2(xp2) {
  distance = std::sqrt(p1.getX() * p1.getX() + p1.getY() * p1.getY());
}
Line::Line(const Line &q) : p1(q.p1), p2(q.p2) {
  distance = std::sqrt(p1.getX() * p1.getX() + p1.getY() * p1.getY());
}
double Line::getDistance() const { return distance; }