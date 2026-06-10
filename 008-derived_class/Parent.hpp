#include <iostream>
#include <sec_api/string_s.h>

class Parent {
private:
  char *name = NULL;

public:
  Parent(const char *n = NULL) {
    std::cout << "Parent constructor called" << std::endl;
    name = new char[strlen(n) + 1]{};
    strcpy_s(name, strlen(n) + 1, n);
  }
  Parent(const Parent &p) {
    std::cout << "Parent copy constructor called" << std::endl;
    name = new char[strlen(p.name) + 1]{};
    strcpy_s(name, strlen(p.name) + 1, p.name);
  }
  ~Parent() {
    std::cout << "Parent destructor called" << std::endl;
    delete[] name;
  }
  Parent &operator=(const Parent &p) {
    std::cout << "Parent copy assignment operator called" << std::endl;
    if (this == &p) {
      return *this;
    }
    delete[] name;
    name = new char[strlen(p.name) + 1]{};
    strcpy_s(name, strlen(p.name) + 1, p.name);
    return *this;
  }
};
class Child : public Parent {
private:
  char *gender = NULL;
  int age = 0;

public:
  Child(int a = 0, const char *g = NULL, const char *n = NULL)
      : Parent(n), age(a) {
    std::cout << "Child constructor called" << std::endl;
    gender = new char[strlen(g) + 1]{};
    strcpy_s(gender, strlen(g) + 1, g);
  }
  Child(const Child &c) : Parent{c}, age(c.age) {
    std::cout << "Child copy constructor called" << std::endl;
    gender = new char[strlen(c.gender) + 1]{};
    strcpy_s(gender, strlen(c.gender) + 1, c.gender);
  }
  ~Child() {
    std::cout << "Child destructor called" << std::endl;
    delete[] gender;
  }
  Child &operator=(const Child &c) {
    std::cout << "Child copy assignment operator called" << std::endl;
    if (this == &c) {
      return *this;
    }
    Parent::operator=(c);
    delete[] gender;
    gender = new char[strlen(c.gender) + 1]{};
    strcpy_s(gender, strlen(c.gender) + 1, c.gender);
    return *this;
  }
};