#include "main.ih"

bool isCorrectQuery(ofstream &oStrm, ifstream &iStrm, Mode mode)
{
    if (not oStrm.good()) {
        cout << "ERROR: A valid output file was not supplied" << '\n';
        return false;
    }

    if (not iStrm.good()) {
        cout << "ERROR: A valid input file was not supplied" << '\n';
        return false;
    }

    if (mode == TOHUMAN)
    {
        char tmp;
        iStrm.read(&tmp, sizeof(char));
        if (tmp != 'b') {
            cout <<
                 "ERROR: Converting to human-readable from non-binary"
                 << '\n';
            return false;
        }
    }

    return true;
}
