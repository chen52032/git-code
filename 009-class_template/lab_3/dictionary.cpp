#include "Dictionary.hpp"

int main() {
  Dictionary<const char *, const char *> dict(10);
  dict.print();
  dict.add("apple", "fruit");
  dict.add("banana", "fruit");
  dict.add("dog", "animal");
  dict.print();

  std::cout << "\n=============dict_secialized============\n";
  Dictionary<int, const char *> dict_special(10);
  dict_special.print();
  dict_special.add(100, "apple");
  dict_special.add(101, "banana");
  dict_special.add(103, "dog");
  dict_special.print();
  dict_special.add(89, "cat");
  dict_special.print();
  dict_special.sort();
  std::cout << "sorted:\n";
  dict_special.print();
}