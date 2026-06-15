#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>


int main() {
  std::cout << "input key: ";
  std::string in_str;
  int count;
  std::map<std::string, int> map1;

  while (std::cin >> in_str) {
    if (in_str == "EOF") {
      break;
    }
    map1[in_str]++;
    std::cout << "input key: ";
  }

  std::vector<std::string> svec;
  for (const auto &pair : map1) {
    svec.push_back(pair.first);
  }
  std::set<std::string> set1(svec.begin(), svec.end());
  std::copy(set1.begin(), set1.end(), std::back_inserter(svec));

  std::list<std::string> list1;
  std::unique_copy(svec.begin(), svec.end(), std::front_inserter(list1));

  list1.sort();

  std::vector<std::string> result;
  std::unique_copy(list1.begin(), list1.end(),
                   std::inserter(result, result.end()));
}