#include "main.ih"

char positionToChar(int posInAlph) {
    return static_cast<char>(posInAlph == 0 ? '\t' :
                      posInAlph == 1 ? '\n' :
                      posInAlph - 2 + ' ');
}