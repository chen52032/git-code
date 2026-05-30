#include <iostream>
#include <vector>
using namespace std;

void Print_vector(vector<int> &v_input, const string type) {
  for (int i = 0; i < v_input.size(); ++i) {
    cout << v_input[i] << "  ";
  }
  cout << endl;
}