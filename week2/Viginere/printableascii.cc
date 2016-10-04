#include "main.ih"

char printableAscii(char ch, Vars& vars)
{
    int posInAlph = charToPosition(ch);
    int shift = charToPosition(vars.key[vars.keyIdx % vars.len]);

    vars.action == ENCRYPT ? (posInAlph += shift) : (posInAlph -= shift);

    posInAlph = posInAlph < 0                 ? posInAlph + vars.alphabetSize :
                posInAlph > vars.alphabetSize ? posInAlph - vars.alphabetSize :
                posInAlph;

    return positionToChar(posInAlph);
}
