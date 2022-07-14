#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> digits {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "X  ";
  for (auto digit: digits) {
    if (digit < 10) {
      cout << "0";
    }
    cout << digit << " ";
  }
  cout << endl;

  for (auto digit: digits) {
    if (digit < 10) {
      cout << "0";
    }
    cout << digit << " ";
    for (auto digit2: digits) {
      if (digit * digit2 < 10) {
        cout << "0";
      }
      cout << digit * digit2 << (" ");
    }
    cout << endl;
  }

  return 0;
}
