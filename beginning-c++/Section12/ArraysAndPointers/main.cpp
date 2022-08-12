#include <iostream>

using namespace std;

int main()
{
  int scores[]{100, 95, 88};

  cout << "Value of scores: " << scores << endl;
  int *score_ptr{scores};
  cout << "Value of score_ptr: " << score_ptr << endl;

  cout << "Array subscript:" << endl;
  cout << "scores[0]: " << scores[0] << endl;
  cout << "scores[1]: " << scores[1] << endl;
  cout << "scores[2]: " << scores[2] << endl;

  cout << "Pointer subscript:" << endl;
  cout << "*score_ptr: " << *score_ptr << endl;
  cout << "*(score_ptr + 1): " << *(score_ptr + 1) << endl;
  cout << "*(score_ptr + 2): " << *(score_ptr + 2) << endl;

  cout << "Array offset:" << endl;
  cout << "*scores: " << *scores << endl;
  cout << "*(scores + 1): " << *(scores + 1) << endl;
  cout << "*(scores + 2): " << *(scores + 2) << endl;
}
