#include "main.ih"

bool streamsOk(ofstream &oStrm, ifstream &iStrm, Mode mode)
{
    if (not oStrm.good()) {
        cout << "ERROR: A valid output file was not supplied" << '\n';
        return false;
    }

    if (not iStrm.good()) {
        cout << "ERROR: A valid input file was not supplied" << '\n';
        return false;
    }

    return true;
}
