#include <iostream>

using namespace std;

int main()
{
  bool done{false};
  int number{0};

  while (!done)
  {
    cout << "Enter an integer between 1 and 5: ";
    cin >> number;
    if (number >= 1 && number <= 5)
    {
      cout << "Nice!" << endl;
      done = true;
    }
    else
    {
      cout << "Try again!" << endl;
    }
  }

  return 0;
}
