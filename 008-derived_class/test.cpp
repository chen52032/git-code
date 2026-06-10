#include "Parent.hpp"

int main() {
  Parent *p = new Parent{"zhangsan"};
  delete p;
  Child *c = new Child{10, "male", "lisi"};
  delete c;
  p = new Child{5, "female", "wangwu"};
  delete p;
  std::cout << "=============copy constructor test=============" << std::endl;
  Parent p1{"zhangsan"};
  Parent p2 = p1; // This will call the copy constructor
  Child c1{10, "male", "lisi"};
  Child c2 = c1; // This will call the copy constructor
  std::cout << "=============assignment operator test============="
            << std::endl;
  Parent p3{"wangwu"};
  p3 = p1; // This will call the copy assignment operator
  Child c3{5, "female", "zhaoliu"};
  c3 = c1; // This will call the copy assignment operator
}