#include <iostream>

using namespace std;

int main() {
  int *p;
  cout << "Value of p: " << p << endl;
  cout << "Address of p: " << &p << endl;
  cout << "sizeof p: " << sizeof p << endl;
  p = nullptr;
  cout << "Value of nullptr p: " << p << endl;
  cout << "Address of nullptr p: " << &p << endl;
  cout << "sizeof nullptr p: " << sizeof p << endl;

  double high_temp = 100.7;
  double low_temp = 37.2;
  double *temp_ptr;
  temp_ptr = &high_temp;
  temp_ptr = &low_temp;
  temp_ptr = nullptr;

  return 0;
}
