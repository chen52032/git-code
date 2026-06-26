#include <iostream>
#include <ostream>
#include <string>

template <class T1, class T2> class Pair {
  T1 key;
  T2 value;

public:
  Pair(T1 k, T2 v) : key(k), value(v) {}
  bool operator<(const Pair<T1, T2> &p) const;
  friend std::ostream &operator<<(std::ostream &os, const Pair<T1, T2> &pair) {
    os << "[" << pair.key << " : " << pair.value << "]";
    return os;
  }
};

template <class T1, class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2> &p) const {
  return this->value < p.value;
}

int main() {
  Pair<std::string, int> one("Tom", 21), two("Alice", 20);
  if (one < two) {
    std::cout << one;
  } else {
    std::cout << two;
  }
}