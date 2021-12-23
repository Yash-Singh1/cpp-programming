#include <iostream>
#include <vector>

using namespace std;

int main() {
  int amount {0};
  cout << "Enter the amount of numbers you want the average of: ";
  cin >> amount;

  cout << "Enter the numbers each seperated by a space: ";
  int numbers[amount] {};
  for (int i {0}; i < amount; i++) {
    cin >> numbers[i];
  }

  int total {0};
  for (auto number: numbers) {
    total += number;
  }

  cout << "The average is " << total / amount << endl;
}
