unsigned long long rawfib(unsigned long long value) {
    return value < 3 ? 1 : rawfib(value - 1) + rawfib(value - 2);
}
