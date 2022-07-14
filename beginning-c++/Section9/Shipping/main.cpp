#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  const float baseCost {2.50};

  cout << "Welcome to the Package Cost Calculator!" << endl;

  int max_dimension {10};
  const int tier1Threshold {100};
  const int tier2Threshold {500};
  const float tier1Surcharge {0.10};
  const float tier2Surcharge {0.25};

  float width {}, length {}, depth {};
  cout << "Enter the width, length, depth seperated by spaces: ";
  cin >> width >> length >> depth;

  if (width > max_dimension || length > max_dimension || depth > max_dimension) {
    cout << "Sorry your package's dimensions exceeded the limits set" << endl;
  } else {
    float volume {width * length * depth};
    double packageCost {baseCost};

    if (volume > tier2Threshold) {
      packageCost += packageCost * tier2Surcharge;
      cout << "adding tier 2 surcharge" << endl;
    } else if (volume > tier1Threshold) {
      packageCost += packageCost * tier1Surcharge;
      cout << "adding tier 1 surcharge" << endl;
    }

    cout << fixed << setprecision(2); // prints dollars nicely
    cout << "The volume of your package is " << volume << endl;
    cout << "Your package will cost $" << packageCost << endl;
  }

  cout << endl;
  return 0;
}
