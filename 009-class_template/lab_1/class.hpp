#pragma once
class Point {
private:
  double x, y;

public:
  Point(double newX, double newY);
  Point(const Point &p);
  double getX() const;
  double getY() const;
};

class Line {
private:
  Point p1, p2;
  double distance;

public:
  Line(Point xp1, Point xp2);
  Line(const Line &q);
  double getDistance() const;
};