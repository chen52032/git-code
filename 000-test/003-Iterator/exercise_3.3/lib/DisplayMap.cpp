#include <iostream>
#include <map>
#include <ostream>
#include <string>
#include <vector>

void display_map(
    const std::map<std::string, std::vector<std::string>> &families,
    std::ostream &os = std::cout) {
  std::map<std::string, std::vector<std::string>>::const_iterator iter_map{
      families.begin()},
      end_iter_map{families.end()};
  for (; iter_map != end_iter_map; ++iter_map) {
    os << "The " << iter_map->first << " has" << ' ';
    if (!iter_map->second.size())
      os << "no children\n";
    else {
      os << iter_map->second.size() << ' ' << "children: ";
      std::vector<std::string>::const_iterator iter_vec{
          iter_map->second.begin()},
          end_iter_vec{iter_map->second.end()};
      while (iter_vec != end_iter_vec) {
        os << *iter_vec << ' ';
        ++iter_vec;
      }
      os << std::endl;
    }
  }
}

void query_map(std::string &search_str,
               std::map<std::string, std::vector<std::string>> &families) {
  std::map<std::string, std::vector<std::string>>::const_iterator iter_map =
      families.find(search_str);
  if (iter_map == families.end()) {
    std::cout << "Sorry, " << "the " << "( " << search_str << " )"
              << " is not currently endterd.\n";
    return;
  }
  std::cout << "The" << ' ' << search_str << ' ';
  if (!iter_map->second.size())
    std::cout << "has no children\n";
  else {
    std::cout << "has " << iter_map->second.size() << " children : ";
    std::vector<std::string>::const_iterator iter_vec{iter_map->second.begin()},
        end_iter_vec{iter_map->second.end()};
    for (; iter_vec != end_iter_vec; ++iter_vec) {
      std::cout << *iter_vec << ' ';
    }
    std::cout << std::endl;
  };
}