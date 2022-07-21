#include <iostream>
#include <iomanip>

using namespace std;

double a_penny_doubled_everyday(int current, double money);

void amount_accumulated()
{
  double total_amount = a_penny_doubled_everyday(25, 0.01);
}

double a_penny_doubled_everyday(int current, double money)
{
  if (current == 1)
    return money;
  return a_penny_doubled_everyday(current - 1, money * 2);
}
