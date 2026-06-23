#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

class even_elem {
public:
  bool operator()(int elem) { return elem % 2 == 0; }
};

int main() {
  std::vector<int> input;
  std::cout << "please enter:\n";
  std::copy(std::istream_iterator<int>{std::cin}, std::istream_iterator<int>(),
            std::back_inserter(input));

  std::vector<int>::iterator iter_vec_division =
      std::partition(input.begin(), input.end(), even_elem());

  std::ofstream out_file_even("even.txt"), out_file_odd("odd.txt");
  if (!out_file_odd || !out_file_even) {
    std::cerr << "Unable to write file!!!" << std::endl;
    return -1;
  }
  std::ostream_iterator<int> out_iter_even{out_file_even, "\n"},
      out_iter_odd{out_file_odd, " "};
  std::copy(input.begin(), iter_vec_division, out_iter_even);
  std::copy(iter_vec_division, input.end(), out_iter_odd);
}