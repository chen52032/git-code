#include <iostream>
class Polygon {
protected:
  int width, height;

public:
  Polygon(int w, int h) : width(w), height(h) {}
  void set_values(int a, int b) {
    width = a;
    height = b;
  }
  virtual int area() { return 0; }
  void printarea() { std::cout << "Area: " << this->area() << std::endl; }
};

class Rectangle : public Polygon {
public:
  Rectangle(int w, int h) : Polygon(w, h) {}
  int area() { return width * height; }
};

class Triangle : public Polygon {
public:
  Triangle(int w, int h) : Polygon(w, h) {}
  int area() { return width * height / 2; }
};