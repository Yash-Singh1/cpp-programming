#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int num{100};
  int &ref {num};

  cout << num << endl; // 100
  cout << ref << endl; // 100

  num = 200;
  cout << endl << num << endl; // 200
  cout << ref << endl;         // 200

  cout << endl;
  vector<string> chars{"A", "B", "C"};

  for (auto str: chars) {
    str = "funny";
  }

  for (auto str: chars) {
    cout << str << " ";
  }
  cout << endl;

  for (auto &str: chars) {
    str = "funny";
  }

  for (auto const &str: chars) {
    cout << str << " ";
  }
  cout << endl;

  cout << endl;
  return 0;
}
