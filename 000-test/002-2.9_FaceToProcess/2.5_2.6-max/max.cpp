#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

// inline int max(int t1, int t2) { return t1 > t2 ? t1 : t2; }
// inline float max(float t1, float t2) { return t1 > t2 ? t1 : t2; }
// inline std::string max(const std::string &t1, const std::string &t2) {
//   return t1 > t2 ? t1 : t2;
// }

// inline int max(const std::vector<int> &vec) {
//   return *std::max_element(vec.begin(), vec.end());
// }
// inline float max(const std::vector<float> &vec) {
//   return *std::max_element(vec.begin(), vec.end());
// }
// inline std::string max(const std::vector<std::string> &vec) {
//   return *std::max_element(vec.begin(), vec.end());
// }

// inline int max(const int *arr, int size) {
//   return *std::max_element(arr, arr + size);
// }
// inline float max(const float *arr, int size) {
//   return *std::max_element(arr, arr + size);
// }
// inline std::string max(const std::string *arr, int size) {
//   return *std::max_element(arr, arr + size);
// }
namespace tem_max {
template <typename Type> inline Type max(Type t1, Type t2) {
  return t1 > t2 ? t1 : t2;
}
template <typename eletype>
inline eletype max(const std::vector<eletype> &vec) {
  return *std::max_element(vec.begin(), vec.end());
}
template <typename arrtype> inline arrtype max(const arrtype *arr, int size) {
  return *std::max_element(arr, arr + size);
}
} // namespace tem_max

int main() {
  std::string str[] = {"we", "were", "her", "pride", "of", "ten"};
  std::vector<std::string> svec{str, str + 6};

  int iarr[] = {12, 70, 2, 169, 1, 5, 29};
  std::vector<int> ivec{12, 70, 2, 169, 1, 5, 29};
  float farr[] = {2.5, 24.8, 18.7, 4.1, 23.9};
  std::vector<float> fvec{2.5, 24.8, 18.7, 4.1, 23.9};

  int imax = tem_max::max(tem_max::max(ivec), tem_max::max(iarr, 7));
  float fmax = tem_max::max(tem_max::max(fvec), tem_max::max(farr, 5));
  std::string smax = tem_max::max(tem_max::max(svec), tem_max::max(str, 6));

  std::cout << "imax: " << imax << "\n"
            << "fmax: " << fmax << "\n"
            << "smax: " << smax << "\n";
}