#include <iostream>

using namespace std;

int main()
{
  int scores[]{100, 42, 54, -1};
  int *score_ptr{scores};

  while (*score_ptr != -1)
  {
    cout << *score_ptr << endl;
    score_ptr++;
  }

  cout << endl;

  score_ptr = scores;
  while (*score_ptr != -1)
  {
    cout << *score_ptr++ << endl;
  }

  cout << endl;

  string s1{"Hello"};
  string s2{"Hello"};
  string s3{"World"};

  string *p1{&s1};
  string *p2{&s2};
  string *p3{&s1};

  cout << boolalpha;
  cout << "p1 == p2: " << (p1 == p2) << endl;
  cout << "p1 == p3: " << (p1 == p3) << endl;
  cout << "*p1 == *p2: " << (*p1 == *p2) << endl;
  cout << "*p1 == *p3: " << (*p1 == *p3) << endl;

  p3 = &s3;
  cout << "p1 == p3: " << (p1 == p3) << endl;

  cout << endl;

  char name[] {"Frank"};
  char *char_ptr1{nullptr};
  char *char_ptr2{nullptr};

  // char_ptr1 = name; // same thing
  char_ptr1 = &name[0];
  char_ptr2 = &name[3];

  cout << "In the string " << name << " " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;
}