template <class Type> class Bag {
private:
  int max_size, size;
  Type *elem;

public:
  Bag() : elem(0), max_size(1), size(0) {}
  bool add(Type t) {
    Type *tmp;
    if (size + 1 >= max_size) {
      max_size *= 2;
      tmp = new Type[max_size]{};
      for (int i = 0; i < size; i++) {
        tmp[i] = elem[i];
      }
      tmp[size++] = t;
      delete[] elem;
      elem = tmp;
      return true;
    } else {
      elem[size++] = t;
      return true;
    }
  }

  void display() {
    for (int i = 0; i < size; i++) {
      std::cout << "[" << i << "]: " << elem[i] << " ";
    }
    std::cout << std::endl;
  }
};

template <class Type> class Bag<Type *> {
private:
  int max_size, size;
  Type *elem;

public:
  Bag() : elem(0), max_size(1), size(0) {}
  bool add(Type *t) {
    Type *tmp;
    if (size + 1 >= max_size) {
      max_size *= 2;
      tmp = new Type[max_size]{};
      for (int i = 0; i < size; i++) {
        tmp[i] = elem[i];
      }
      tmp[size++] = *t;
      delete[] elem;
      elem = tmp;
      return true;
    } else {
      elem[size++] = *t;
      return true;
    }
  }

  void display() {
    for (int i = 0; i < size; i++) {
      std::cout << "[" << i << "]: " << elem[i] << " ";
    }
    std::cout << std::endl;
  }
};
