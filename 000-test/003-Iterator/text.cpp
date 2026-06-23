#include "find.cpp"
#include <iostream>
#include <list>
#include <vector>

int main() {
  const int size = 8;
  int ia[size] = {1, 2, 3, 4, 5, 6, 7, 8};
  std::vector<int> ivec{ia, ia + size};
  std::list<int> ilist{ia, ia + size};
  int *pia = my_find::find(ia, ia + size, 5);
  if (pia != ia + size) {
    std::cout << "int[" << "] is" << *pia << "\n";
  }
  std::vector<int>::iterator it_vec =
      my_find::find(ivec.begin(), ivec.end(), 2);
  if (it_vec != ivec.end()) {
    std::cout << "vector[" << "] is" << *it_vec << "\n";
  }
  std::list<int>::iterator it_list =
      my_find::find(ilist.begin(), ilist.end(), 8);
  if (it_list != ilist.end()) {
    std::cout << "ilist[" << "] is" << *it_list << "\n";
  }
}