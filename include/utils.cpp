#include "headers/utils.hpp"

template<typename T>
void print_vector(const vector<T> &arr){
  const int N = arr.size();
  cout << "[";
  for (int i = 0; i < N; ++i) {
    auto val = arr[i];
    cout << val;
    if (i < N - 1) cout << ", ";
  }
  cout << "]" << endl;
}

template void print_vector<int>(const vector<int> &arr);
template void print_vector<float>(const vector<float> &arr);
template void print_vector<bool>(const vector<bool> &arr);