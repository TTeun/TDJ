#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

#define ln2 log(2)

size_t lsb(unsigned long long value) {
    size_t trailingZeroes = 0;
    while (value % 2 == 0) {
        value >>= 1;
        ++trailingZeroes;
    }
    return trailingZeroes;
}

size_t msb1(unsigned long long value) {
    size_t requiredShifts = 0;
    while (value >>= 1)
        ++requiredShifts;

    return requiredShifts;
}

size_t msb2(unsigned long long value) {
    return log(value) / ln2;
}

size_t msb3(unsigned long long value) {
    size_t low = 0;
    size_t high = 8 * sizeof(unsigned long long);
    size_t mid;
    while (true) {
        mid = (low + high) / 2;
        if (mid == low)
            return mid;
        if (1ULL << mid <= value)
            low = mid;
        else
            high = mid;
    }
}

int main(int argc, char * argv[]) {
    unsigned long long value = stoul(argv[1]);
    size_t methodNumber = stoul(argv[2]);
    size_t numberOfRepeats = argc > 3 ? stoul(argv[3]) : 1;
    size_t tempResult;
    for (size_t repeater = 0; repeater < numberOfRepeats; ++repeater)
        tempResult = methodNumber == 1 ? msb1(value) :
                     methodNumber == 2 ? msb2(value) :
                     msb3(value);


    return 0;
}