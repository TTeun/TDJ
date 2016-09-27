#include "main.ih"

unsigned long long fib(unsigned long long value) {
    unsigned long long fibval[value + 1] = {0};

    return recurFib(fibval, value);
}