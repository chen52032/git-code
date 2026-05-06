#include "iostream"
#include "timeclass.hpp"
using namespace std;

int main(){
    string s{"Hello"};
    s += "C";
    s.operator+=("CPP");
    cout << s << "\n";
    Mytime t1(1, 50);
    int m=20;
    // t1 = t1 + m;
    t1 = m + t1;
    t1.info();
}