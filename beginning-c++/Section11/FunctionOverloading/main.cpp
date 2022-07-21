#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int a)
{
  cout << a << endl;
}

void print(double a)
{
  cout << a << endl;
}

void print(string a)
{
  cout << a << endl;
}

void print(string a, string b)
{
  cout << a << " " << b << endl;
}

void print(vector<string> v)
{
  for (auto s : v)
  {
    cout << s << " ";
  }
  cout << endl;
}

int main()
{
  print(100);
  print('A'); // char is promoted to int
  print(123.5);
  print(123.5F);           // float is promoted to double
  print("C-style string"); // converted to c++ style string
  string s{"C++ string"};
  print(s);
  print("C-style string", s);
  print({"Larry", "Scooby", "Doo"});

  return 0;
}
