#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "main.ih"

using namespace std;

int main(int argc, char * argv[]) {
    long long value = stol(argv[1]);
    printBig(cout, value);
    //printBigAlt(cout, value);
    return 0;
}
