#include "main.ih"

char binToChar(int bits) {
    return bits == 0 ? 'A' :
           bits == 1 ? 'C' :
           bits == 2 ? 'T' :
           'G';
}
