#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <ReadMap.hpp>


int main() {
  std::ifstream in_file("families.txt");
  std::map<std::string, std::vector<std::string>> families;

  if (!in_file) {
    std::cerr << "Unable to open file" << std::endl;
    return -1;
  }

  read_map(in_file, families);
  std::string search_name;
  while (1) {
    std::cout << "Please enter a name (q to quit) : ";
    std::cin >> search_name;
    if (search_name == "q")
      break;
    query_map(search_name, families);
  }
  display_map(families);
}