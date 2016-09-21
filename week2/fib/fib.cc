unsigned long long fib(unsigned long long value) {
    if (value <= 2)
        return 1;

    unsigned long long fibval[value + 1];
    fibval[1] = 1;
    fibval[2] = 1;
    for (unsigned long long index = 3; index != value + 1; ++index)
        fibval[index] = fibval[index - 1] + fibval[index - 2];

    return fibval[value];
}

