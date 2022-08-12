#include <iostream>

int main() {
  int high_score {100};
  int low_score {6};
  const int *high_score_ptr {&high_score};

  high_score = 86;
  // *high_score_ptr = 88; // not allowed because assigning through a pointer -> constant
  high_score_ptr = &low_score;

  int *const score_ptr {&high_score};

  *score_ptr = 90;
  // score_ptr = &low_score; // not allowed because assign to a const pointer

  const int *const score_ptr2 {&high_score};

  // *score_ptr2 = 99; // not allowed because assigning through a pointer -> constant
  // score_ptr = &low_score; // not allowed because assigning through a const pointer
}
