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

    rounded = round(input / 15) * 15;                  //round to nearest 15 degrees
    xx = floor(rounded / 30);                          //compute the hours
    yy = xx == (rounded / 30) ? "00" : "30";           //compute the minutes
    xx = xx % 12;                                      //make sure xx is between 1 and 12
    if (xx == 0)
      xx = 12;
                                                       //display time
    cout << "object at your " << xx << ":" << yy << " position" << "\n";
  }
}
