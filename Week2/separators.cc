#include "printbig.h"
#include "printbigtwo.h"
#include <iostream>

using namespace std;

long long value;

int main()
{
  cout << "Please enter a number which needs separators: \n > ";
  cin >> value;
  cout << "Your value with separators is ";
  printBig(value);                              //using recursive function
  cout << endl;
  cout << "Your value with separators is ";
  printBigTwo(value);                           //using other function
  cout << endl;
}
