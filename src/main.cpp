#include <iostream>
#include <vector>
#include <string>
#include "utils.hpp"

using namespace std;

int main() {
  cout << "Hello world!!" << endl;
  vector<int> int_vec = {1, 2, 3, 4};
  vector<float> float_vec = {1.2f, 2.3f, 3.4f, 4.5f};
  vector<bool> bool_vec = {true, false, true, false};
  cout << "int vec: "; print_vector(int_vec);
  cout << "float vec: "; print_vector(float_vec);
  cout << "bool vec: "; print_vector(bool_vec);
  return 0;
}