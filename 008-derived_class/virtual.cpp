#include "employ.hpp"
#include <iostream>
#include <string>


class Person {
public:
  std::string name;
  Person(std::string n) : name(n) {}
  void print() { std::cout << "name: " << name << std::endl; }
};
class Student : public Person {
public:
  std::string id;
  Student(std::string n, std::string i) : Person(n), id(i) {}
  void print() { std::cout << "name: " << name << ", id: " << id << std::endl; }
};

void printobj(Person &p) { p.print(); }

int main() {
  Student stu("yu", "2019");
  printobj(stu);

  Person *p = new Student("xue", "2020");
  p->print(); // if print() is not a virtual function, different output
  delete p;   // if its destructor is not virtual

  // if you want to call a function in the base class
  Student stu2("li", "2021");
  stu2.print();

  Person *p2 = new Student("xue", "2020");
  p2->Person::print();
  delete p2;

  // employee
  std::cout << "===========employee============" << std::endl;
  Employee e{"zhang", "1000"};
  SalariedEmployee se{"wangfang", "1001", 2000};

  Employee *pe = &e;
  pe->printInfo();

  pe = &se;
  pe->printInfo();

  //destructor
  std::cout << "===========destructor============" << std::endl;
  Employee *pe2 = new SalariedEmployee("zhao", "1002", 3000);
  pe2->printInfo();
  delete pe2;
}