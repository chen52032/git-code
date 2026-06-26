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

#include "part2.hpp"

int main() {
  part_test<int, int> original(5, 8);
  part_test<float, bool> original2(5.1F, true);
  part_test<double, char> special(2.34, 'a');
  std::cout << "\n===========part2=============\n";

  // 测试普通 Bag<int>
  Bag<int> intBag;
  intBag.add(10);
  intBag.add(20);
  intBag.add(30);
  std::cout << "Bag<int>: ";
  intBag.display();

  // 测试普通 Bag<double>
  Bag<double> doubleBag;
  doubleBag.add(1.1);
  doubleBag.add(2.2);
  doubleBag.add(3.3);
  doubleBag.add(4.4);
  doubleBag.add(5.5);
  std::cout << "Bag<double>: ";
  doubleBag.display();

  // 测试指针偏特化 Bag<int*>
  int a = 100, b = 200, c = 300 , d=400;
  int *p = &d;
  Bag<int *> ptrBag;
  ptrBag.add(&a);
  ptrBag.add(&b);
  ptrBag.add(&c);
  ptrBag.add(p);
  std::cout << "Bag<int*>: ";
  ptrBag.display();

  // 测试指针偏特化 Bag<double*>
  double x = 1.5, y = 2.5, z=3.5;
  double * pd=&z;
  Bag<double *> doublePtrBag;
  doublePtrBag.add(&x);
  doublePtrBag.add(&y);
  doublePtrBag.add(pd);
  std::cout << "Bag<double*>: ";
  doublePtrBag.display();
}