#include <iostream>
#include <string>

class Employee {
private:
  std::string name;
  std::string id;

public:
  Employee(std::string n, std::string i) : name(n), id(i) {}
  std::string getName() { return name; }
  std::string getId() { return id; }
  virtual ~Employee() {std::cout << "Employee destructor called for " << name << std::endl;}
  virtual void printInfo() {
    std::cout << "Name: " << name << ", ID: " << id << std::endl;
  }
};

class SalariedEmployee:public Employee {
    private:
        double salary;
    public:
        SalariedEmployee(std::string n, std::string i, double s) :Employee(n, i), salary(s){}
        // void printInfo() {
        //     Employee::printInfo();
        //     std::cout << "Salary: " << salary << std::endl;
        // }
        ~SalariedEmployee() {std::cout << "SalariedEmployee destructor called for " << getName() << std::endl;}
        void printInfo(){
            std::cout << "Name: " << getName() << ", ID: " << getId() << ", Salary: " << salary << std::endl;
        }
};
