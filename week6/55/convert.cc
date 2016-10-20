#include "main.ih"

void convert(ofstream &oStrm, ifstream &iStrm, State (*converter)(ofstream&, ifstream&)) {
    switch (converter(oStrm, iStrm))
    {
    case OK:
        cout << "Conversion complete!" << '\n';
        break;
    case NOTBINARY:
        cout << "Failed: Input file is not of binary type, i.e.,"
             " it does not start with the char 'b'";
        break;
    case EMPTYFILE:
        cout << "Failed: Input file is empty" << '\n';
        break;
    case WRONGLETTER:
        cout << "Failed: Input contains letter other than "
             "'A', 'T', 'C' or 'G'" << '\n';
        break;
    default:
        cout << "To binary failed" << '\n';
    }
}