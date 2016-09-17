#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

double input;
int xx;
string yy;
double rounded;

int main()
  {
  while(true)
  {
    cout << "? ";
    cin >> input;
    if (input == 0)
      exit(0);

    rounded = round(input / 15) * 15;
    xx = floor(rounded / 30);
    yy = xx == (rounded / 30) ? "00" : "30";
    xx = xx % 12;
    if (xx == 0)
      xx = 12;

    cout << "object at your " << xx << ":" << yy << " position" << "\n";
  }
}
