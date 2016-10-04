/*
    The alphabet for the encryption is
            '\t','\n',' ','!', .... ,'~'
    index :  0    1    2   3
    ascii :  9    10   32  33  ....

    So even though the gap between '\n' and '!' for instance is 23 in ascii,
    it is only 2 in out alphabet. Luckily, the 'hole' between the '\n' and the
    space is the only 'hole' in our alphabet. The function charToPosition
    maps the characters (ascii values) to out alphabet values and the function
    positionToChar returns the correct char given its position in out alphabet.

    A consequence is that the number of letters in our alphabet is given by
    '~' - ' ' + '\n' - '\t' + 2. The + 2 is due to the fact that '\n' - '\t'
    gives only 1 instead of the 2 letters, and similarly for '~' - ' '.
*/

#include "main.ih"

int main(int argc, char* argv[])
{
    Vars vars = arguments(argc, argv[1]);
    process(vars);
}
