#include <iostream>
template <class T1, class T2> class Dictionary {
private:
  T1 *keys;
  T2 *values;
  int size, max_size;

public:
  Dictionary(int initial_size) : size(0), max_size(1) {
    while (initial_size >= max_size) {
      max_size *= 2;
    }
    keys = new T1[max_size];
    values = new T2[max_size];
  }

  void add(T1 key_add, T2 value_add) {
    T1 *tmpkey;
    T2 *tmpval;
    if (size + 1 >= max_size) {
      max_size *= 2;
      tmpkey = new T1[max_size];
      tmpval = new T2[max_size];
      for (int i = 0; i < size; ++i) {
        tmpkey[i] = keys[i];
        tmpval[i] = values[i];
      }
      delete[] keys;
      delete[] values;
      tmpkey[size] = key_add;
      tmpval[size++] = value_add;
      keys = tmpkey;
      values = tmpval;
    } else {
      keys[size] = key_add;
      values[size++] = value_add;
    }
  }

  void print() {
    for (int i = 0; i < size; ++i) {
      std::cout << "[" << keys[i] << " : " << values[i] << "]" << "\n";
    }
  }

  ~Dictionary() {
    delete[] keys;
    delete[] values;
  }
};

template <class T1> class Dictionary<int, T1> {
  int *keys;
  T1 *values;
  int size, max_size;

public:
  Dictionary(int initial_size) : size(0), max_size(1) {
    while (initial_size >= max_size) {
      max_size *= 2;
    }
    keys = new int[initial_size]{};
    values = new T1[initial_size];
  }

  void add(int key, T1 value) {
    if (size + 1 >= max_size) {
      max_size *= 2;
      int *tmpkeys = new int[max_size]{};
      T1 *tmpvals = new T1[max_size];
      for (int i = 0; i < size; ++i) {
        tmpkeys[i] = keys[i];
        tmpvals[i] = values[i];
      }
      delete[] keys;
      delete[] values;
      tmpkeys[size] = key;
      tmpvals[size++] = value;
      keys = tmpkeys;
      values = tmpvals;
    } else {
      keys[size] = key;
      values[size++] = value;
    }
  }

  bool sort() {
    for (int i = 0; i < size - 1; ++i) {
      for (int j = i + 1; j < size; ++j) {
        if (keys[i] > keys[j]) {
          int t = keys[i];
          T1 tmp = values[i];
          keys[i] = keys[j];
          values[i] = values[j];
          keys[j] = t;
          values[j] = tmp;
        }
      }
    }
    return true;
  }

  void print() {
    for (int i = 0; i < size; ++i) {
      std::cout << "[" << keys[i] << " : " << values[i] << "]" << "\n";
    }
  }

  ~Dictionary() {
    delete[] keys;
    delete[] values;
  }
};