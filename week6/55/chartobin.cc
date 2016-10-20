#include "main.ih"

char charToBin(char ch) {
    return ch == 'A' ? 0 :
           ch == 'C' ? 1 :
           ch == 'T' ? 2 :
           3;
}
