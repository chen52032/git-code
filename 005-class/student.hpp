#pragma once
#include <cstring>
#include <iostream>

class student{
    private:
        inline static int total=0;
        // char * test=new char[20];
        std::string name;
        int age;
        bool gender;
    public:
        void info(){
            std::cout<< "name:" <<name <<'\n';
            std::cout<< "age:" << age <<'\n';
            std::cout<< "gender:" << gender <<'\n';
        }
        student(std::string name, int age, bool gender){
            total++; 
            this->name = name;
            this->age = age;
            this->gender = gender;
        }
        student(){
            total++; 
        }
        ~student(){
            // delete [] test;
            std::cout << "destory: " << name << '\n';
        }
        void setAge(int age);
        void setName(std::string name);
        int getTotal(){
            return total;
        }
};
