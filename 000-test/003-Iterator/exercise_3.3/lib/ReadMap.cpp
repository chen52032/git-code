#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

void read_map(std::ifstream &in_file,
              std::map<std::string, std::vector<std::string>> &families) {
  std::string textline;
  while (std::getline(in_file, textline)) {
    std::vector<std::string> child_vec;
    std::string fam_name;
    std::string::size_type pos1 = 0, pos2 = 0, linelen{textline.size()};
    while ((pos2 = textline.find_first_of(' ', pos2)) != std::string::npos) {
      if (!pos1) {
        fam_name = textline.substr(pos1, pos2);
      } else {
        child_vec.push_back(textline.substr(pos1, pos2 - pos1));
      }
      pos1 = ++pos2;
    }
    if (!pos1) {
      fam_name = textline.substr(pos1);
    }
    if (pos1 < linelen && pos1) {
      child_vec.push_back(textline.substr(pos1));
    }
    if (!families.count(fam_name)) {
      families[fam_name] = child_vec;
    } else {
      std::cerr << fam_name << ' ' << "has exsisted !!!" << std::endl;
    }
  }
}