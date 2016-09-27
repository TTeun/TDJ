#include "main.ih"

int charToPosition(char ch) {
    return ch == 9 ? 0  :
           ch == 10 ? 1 :
           ch - ' ' + 2 ;
}
