#include "iostream"
#include "LIBS.h"

void re(int a);

template<typename T>
T sum(T a, T b){
    std::cout<<typeid(T).name()<<": ";
    return a+b;
}
struct point{
    int x;
    int y;
};
template<>
point sum(point a, point b){
    std::cout<<typeid(point).name()<<": ";
    point c;
    c.x=a.x+b.x;
    c.y=a.y+b.y;
    return c;
}