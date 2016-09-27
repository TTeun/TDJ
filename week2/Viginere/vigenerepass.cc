#include "main.ih"

void vigenerePass(Vars& vars)
{
    cout << "The " << (vars.action == ENCRYPT ? "encrypted " :
                                                "decrypted ") << "text is:\n";
    char ch;
    while ((ch = cin.get()) != EOF) {
        cout << printableAscii(ch, vars);
        ++vars.keyIdx;
    }
    cout << '\n';
}
