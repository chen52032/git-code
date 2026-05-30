#include <head.hpp>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string str = "int";
  vector<int> p_seq;
  int n = 0;
  Pentagonal(n, p_seq);
  Print_vector(p_seq, str);
  Pentagonal(5, p_seq);
  Print_vector(p_seq, str);
  cin >> n;
  Pentagonal(n, p_seq);
  Print_vector(p_seq, str);
  return 0;
}