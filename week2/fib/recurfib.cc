#include "main.ih"

unsigned long long recurFib(unsigned long long * fibval, unsigned long long value) {
    if (value < 3)
        return 1;

    if (fibval[value] == 0) 
        fibval[value] = recurFib(fibval, value - 1) + recurFib(fibval, value - 2);
    
    return fibval[value];
}
