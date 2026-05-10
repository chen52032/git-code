#include "iostream"
#include "timeclass.hpp"
using namespace std;

int main(){
    string s{"Hello"};
    s += "C";
    s.operator+=("CPP");
    cout << s << "\n";
    Mytime t1(1, 50);
    Mytime t2=10;
    int m=20;
    // t1 = t1 + m;
    t1 = m + t1;
    t1.info();
    cout << "this is overload for os:" << t1 << "\n";
    cout << "overload for is and Mytime\n";
    cin >> t1;
    cout << t1 << "\n";
    cout << "=============================";
    cout << "\n" << "t2++: " << (t2++) << "\n";
    cout << "\n" << "++t2: " << (++t2) << "\n";

}