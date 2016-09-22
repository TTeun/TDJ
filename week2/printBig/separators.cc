#include "printbig.h"
#include "printbigtwo.h"
#include <iostream>

using namespace std;


int main()
{
    long long value;
    cout << "Please enter a number which needs separators: \n > ";
    cin >> value;
    cout << "Your value with separators is ";
    printBig(value);                              //using recursive function
    cout << '\n';
    cout << "Your value with separators is ";
    printBigTwo(value);                           //using other function
    cout << endl;
}
