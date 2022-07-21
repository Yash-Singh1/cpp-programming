#include <iostream>
#include <vector>

using namespace std;

void scale_number(int &);
void swap(int &, int &);
void print(const vector<int> &);

int main()
{
  int number{1000};
  scale_number(number);
  cout << number << endl;

  int x{10}, y{20};
  cout << x << " " << y << endl;
  cout << y << " " << x << endl;

  std::vector<int> data{1, 2, 3, 4, 5};
  print(data);

  return 0;
}

void scale_number(int &num)
{
  if (num >= 100)
    num = 100;
}

void swap(int &a, int &b)
{
  int temp{a};
  a = b;
  b = temp;
}

void print(const vector<int> &v)
{
  for (auto num : v)
  {
    cout << num << " ";
  }
  cout << endl;
}
