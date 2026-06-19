#pragma once
#include <iostream>
#include <ostream>
#include <vector>

template <typename elemType>
bool write_vector(const std::vector<elemType> &vec, std::ostream &os,
                  int len = 8) {
  if (vec.empty()) {
    std::cerr << "The vector is empty" << "\n";
    return false;
  }
  typename std::vector<elemType>::const_iterator ite{vec.begin()},
      end_ite{vec.end()};
  int count = 1;
  while (ite != end_ite) {
    os << *ite++ << (!(count++ % len) ? "\n" : " ");
  }
  os << std::endl;
  return true;
}