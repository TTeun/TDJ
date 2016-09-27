#include "main.ih"

void process(Vars& vars)
{
    if (vars.action == USAGE) {
        cerr << "Please use only 1 (for encrypting) or 2 (for decrypting) command line arguments.\n";
        return;
    }
    vigenerePass(vars);
}
