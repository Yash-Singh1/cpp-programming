#include <iostream>

using namespace std;

int main()
{
  enum Direction
  {
    left,
    right,
    up,
    down
  };

  Direction heading {left};

  switch (heading) {
    case left:
      cout << "Going left" << endl;
      break;
    case right:
      cout << "Going right" << endl;
    default:
      // The C++ compiler gives a warning if you don't cover all cases inside your enumeration
      cout << "OK" << endl;
  }

  return 0;
}
