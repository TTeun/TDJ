#include "printbig.h"
#include <iostream>

using namespace std;
long long sep;
int test = 1;
long long length = 1;

void printBig(long long value)
{
  if (value < 0)
  {
    cout << "-";
    value *= -1;
  }

  int lsd = value % 10;         //compute the LSD
  int rest = value / 10;        //compute the smaller value

  if (rest)                     //if the smaller value exceeds
  {                             //zero, apply the algorithm to it
    ++length;
    printBig(rest);
  }

  if (test == 1)
  {
    sep = (3 - (length % 3)) % 3;
    test = 0;
  }

  cout << lsd;
  ++sep;
  if ((sep % 3 == 0) && sep < length)
    cout << "'";
}
