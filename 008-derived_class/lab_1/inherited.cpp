#include <iostream>
class Base {
private:
  int x = 1;

protected:
  int y = 1;

public:
  int z = 1;
  void funBase(Base &b) { // 类内成员函数可访问本对象的成员,传参进来的也可以
    ++x;
    ++y;
    ++z;
    ++b.x;
    ++b.y;
    ++b.z;
  }
};
// class Derived : public Base {
// public:
//   void funDerived(Base &b, Derived &d) {
//     ++x; // private不继承
//     ++y;
//     ++z;
//     ++b.x; // 不是类内成员函数,不能访问private成员
//     ++b.y; // 不是类内成员函数,不能访问protected成员
//     ++b.z;
//     ++d.x; // 没有继承x
//     ++d.y;
//     ++d.z;
//   }
// };
// void fun(Base &b, Derived &d) {
//   ++x; // 类内不可见
//   ++y;
//   ++z;
//   ++b.x;
//   ++b.y;
//   ++b.z;
//   ++d.x;
//   ++d.y;
//   ++d.z;
// }
int main() {
  Base b1, b2;
  b1.funBase(b2);
}