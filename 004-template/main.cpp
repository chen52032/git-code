#include "head.h"
point p1={1,2};
point p2={3,4};point p3;

// template<>
// point sum(point a, point b){
//     std::cout<<typeid(point).name()<<": ";
//     point c;
//     c.x=a.x+b.x;
//     c.y=a.y+b.y;
//     return c;
// }

int main(){
    std::cout<<"contemplate"<<"\n";
    std::cout<<sum(1,2)<<"\n";
    std::cout<<sum(1.1,2.2)<<"\n";
    p3=sum(p1,p2);
    std::cout<<p3.x<<" "<<p3.y<<"\n";
    re(1024);
    std::cout<<f(1024)<<"\n";
    printhello();
}