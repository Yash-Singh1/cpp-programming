#include <iostream>

using namespace std;

void print_array(const int[], size_t);
void set_array(int[], size_t, int);

int main()
{
  int my_array[] = {1, 2, 3, 4, 5};
  print_array(my_array, 5);

  int my_scores[] = {100, 98, 90, 88, 80};
  print_array(my_scores, 5);
  set_array(my_scores, 5, 100);
  print_array(my_scores, 5);

  return 0;
}

void print_array(const int numbers[], size_t size)
{
  for (size_t i = 0; i < size; i++)
  {
    cout << numbers[i] << " ";
  }
  cout << endl;
}

// We can use const keyword to prevent the array from being modified with compiler error
void zero_array(int numbers[], size_t size)
{
  for (size_t i = 0; i < size; i++)
  {
    numbers[i] = 0;
  }
}

void set_array(int numbers[], size_t size, int value)
{
  for (size_t i = 0; i < size; i++)
  {
    numbers[i] = value;
  }
}
