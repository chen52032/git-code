#include "WriteContainer.hpp"
#include <iostream>
#include <vector>

int main() {
  std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 6};
  write_vector(ivec, std::cout, 3);
}