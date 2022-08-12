#include <iostream>

using namespace std;

void display(int array[], const size_t &size)
{
  for (size_t i{0}; i < size; ++i)
  {
    cout << *(array + i) << " ";
  }
  cout << endl;
}

int *multiply_all(int array1[], size_t size1, int array2[], size_t size2)
{
  int *multiplied_arr = new int[size1 * size2];
  for (size_t i{0}; i < size1; ++i)
  {
    for (size_t j{0}; j < size2; ++j)
    {
      multiplied_arr[(i * size2) + j] = array1[i] * array2[j];
    }
  }
  return multiplied_arr;
}

int main()
{
  size_t size1, size2;
  cout << "What size would you like the first array to be?: ";
  cin >> size1;
  cout << endl
       << "What size would you like the second array to be?: ";
  cin >> size2;

  int array1[size1];
  cout << endl
       << "Enter the values of array1 seperated by a space: ";
  for (size_t i{0}; i < size1; ++i)
  {
    cin >> array1[i];
  }

  int array2[size2];
  cout << endl
       << "Enter the values of array2 seperated by a space: ";
  for (size_t i{0}; i < size2; ++i)
  {
    cin >> array2[i];
  }

  cout << endl
       << "Array 1: ";
  display(array1, size1);

  cout << endl
       << "Array 2: ";
  display(array2, size2);

  int *result = multiply_all(array1, size1, array2, size2);
  cout << endl
       << "Result: ";
  display(result, size1 * size2);
  delete[] result;

  cout << endl;
  return 0;
}
