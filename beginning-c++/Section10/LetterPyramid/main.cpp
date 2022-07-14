#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Welcome to the Letter Pyramid Generator!" << endl;
  string input;
  cout << "Enter the input text: ";
  getline(cin, input);

  size_t padding{input.length() - 1};

  for (size_t i{1}; i <= input.length(); ++i)
  {
    cout << string(padding, ' ') << input.substr(0, i);
    if (i != 1)
    {
      for (size_t ri{i - 2}; ri > 0; --ri)
      {
        cout << input[ri];
      }
      cout << input[0];
    }
    cout << endl;
    --padding;
  }

  cout << endl;
  return 0;
}
