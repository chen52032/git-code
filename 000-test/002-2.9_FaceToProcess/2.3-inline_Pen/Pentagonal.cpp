// #include <iostream>
#include "in.hpp"
#include <vector>
#include <cstdlib>

using namespace std;

bool Pentagonal(const int n, vector<int> &v_input) {
  // if (n < 1 || n > 1024) {
  //   cout << "error ! out of range !" << "\n";
  //   return false;
  // }
  if (!inrange(n)) {
    return false;
  }
  static vector<int> v_static = {1};
  while (n > v_static.size()) {
    int len = v_static.size() + 1;
    v_static.push_back(len * (3 * len - 1) / 2);
  }
  v_input = v_static;
  return true;
}