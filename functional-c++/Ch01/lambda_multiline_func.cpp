#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

auto main() -> int
{
  cout << "[lambda_multiline_func.cpp]" << endl;

  vector<int> vect;
  for (int i{0}; i < 10; ++i)
  {
    vect.push_back(i);
  }

  for_each(
      begin(vect),
      end(vect),
      [](int n)
      {
        cout << n << " is";
        if (n < 2)
        {
          if (n == 0)
          {
            cout << " not";
          }
        }
        else
        {
          for (int i{2}; i < n; ++i)
          {
            if (n % i == 0)
            {
              cout << " not";
              break;
            }
          }
        }
        cout << " prime number" << endl;
      });

  return 0;
}
