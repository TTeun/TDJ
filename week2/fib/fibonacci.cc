#include <iostream>
#include "main.ih"

using namespace std;

int main(int argc, char * argv[]) {
    if (argc > 2)
        cout << rawfib(strtoul(argv[1], NULL, 10)) << '\n';
    else
        cout << fib(strtoul(argv[1], NULL, 10)) << '\n';

    return 0;
}