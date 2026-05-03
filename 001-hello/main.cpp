#include "head.h"
int main(){
    std::cout<<"hello CPP"<<std::endl;
    std::cout<<"hello cmake!"<<std::endl;
    printhello();
    std::cout<<"hello cmake and cpp!"<<std::endl;
    std::cout<<std::fixed;
    std::cout<< f(50) <<std::endl;
    int a=10;
    int & b=a;
    std::cout<<a<<" "<<b<<std::endl;
    b=20;
    std::cout<<a<<" "<<b<<std::endl;
    return 0;
}