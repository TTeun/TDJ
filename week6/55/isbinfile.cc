#include "main.ih"

bool isBinFile(ifstream &iStrm) {
    char tmp;
    iStrm.read(&tmp, sizeof(char));
    if (tmp != 'b') {
        cout <<
             "ERROR: Converting to human-readable from non-binary"
             << '\n';
        return false;
    }
    return true;
}