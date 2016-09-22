#include <iostream>

using namespace std;

size_t index(size_t nFighters, size_t one, size_t two) {
    return one > two ? index(nFighters, two, one) :
           one * nFighters - (one * one + one) / 2 + two - one - 1;
}

int main(int argc, char * argv[]) {

    return 0;
}