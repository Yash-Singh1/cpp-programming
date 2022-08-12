#include <iostream>

using namespace std;

void display(int *array, size_t size) {
  cout << endl;
  for (size_t i{0}; i < size; ++i) {
    cout << *array++ << " ";
  }
  cout << endl;
}

int *create_array(size_t size, int init_value = 0)
{
  int *new_storage{nullptr};
  new_storage = new int[size];
  for (size_t i{0}; i < size; ++i)
  {
    *(new_storage + i) = init_value;
  }
  return new_storage;
}

int main()
{
  int *my_array{nullptr};
  size_t size;
  int init_value {};

  cout << "How many integers wuold you like to allocate: ";
  cin >> size;
  cout << endl << "What would you like to initialize them to: ";
  cin >> init_value;

  my_array = create_array(size, init_value);
  display(my_array, size);
  delete [] my_array;

  cout << endl;
  return 0;
}
