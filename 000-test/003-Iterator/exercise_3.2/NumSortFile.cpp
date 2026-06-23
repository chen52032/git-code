#include "WriteContainer.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>


class LessThan {
public:
  bool operator()(const std::string &str1, const std::string str2) {
    return str1.size() < str2.size();
  }
};

int main() {
  std::ifstream in_file{"text.txt"};
  std::ofstream out_file{"text.sort"};
  if (!in_file || !out_file) {
    std::cerr << "Unable to open file" << "\n";
    return -1;
  }

  std::vector<std::string> text;
  std::string word;
  while (in_file >> word) {
    text.push_back(word);
  }
  std::sort(text.begin(), text.end(), LessThan());
  write_vector(text, out_file);
}