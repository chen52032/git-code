#include <iostream>

template <class T1, class T2> class part_test {
private:
  T1 a;
  T2 b;

public:
  part_test(T1 in1, T2 in2) : a(in1), b(in2) { std::cout << "general\n"; }
};

template <class T3> class part_test<T3, char> {
private:
  T3 c;
  char d;

public:
  part_test(T3 in3, char in4) : c(in3), d(in4) {
    std::cout << "partial specialization\n";
  }
};

int main(){
    part_test<int,int> original(5,8);
    part_test<float,bool> original2(5.1F,true);
    part_test<double,char> special(2.34,'a');
}