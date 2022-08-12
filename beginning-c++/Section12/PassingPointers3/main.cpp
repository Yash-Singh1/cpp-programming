#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string> *const v)
{
  for (auto str : *v)
  {
    cout << str << " ";
  }
  cout << endl;
}

void display(int *array, int sentinel)
{
  while (*array != sentinel)
  {
    cout << *array++ << endl;
  }
  cout << endl;
}

int main()
{
  vector<string> stooges{"Larry", "moe", "curly"};
  display(&stooges);

  cout << endl;
  int scores[]{100, 98, 42, 40, -1};
  display(scores, -1);

  cout << endl;
  return 0;
}
