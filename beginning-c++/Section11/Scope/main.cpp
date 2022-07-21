#include <iostream>

using namespace std;

int num{300};

void global_num() {
  cout << num << endl;
}

int main() {
  int num{100};
  int num1{500};

  cout << "Local num is: " << num << " in main()" << endl;

  {
    int num{200};
    cout << "Local num is: " << num << " in block" << endl;
    cout << "Can see num1: " << num1 << endl;
  }

  cout << "Local num is: " << num << " in main()" << endl;
}
