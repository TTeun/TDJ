#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

#include "rawfib.cc"
#include "fib.cc"

int main(int argc, char * argv[]) {
    if (argc > 2)
        cout << rawfib(strtoul(argv[1], NULL, 10)) << '\n';
    else
        cout << fib(strtoul(argv[1], NULL, 10)) << '\n';

    return 0;
}