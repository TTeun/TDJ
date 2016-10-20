#include "main.ih"

State binToHuman(ofstream &oStrm, ifstream &iStrm)
{
    size_t size;
    iStrm.read(reinterpret_cast<char *>(&size), sizeof(size_t));
    cout << "Reading a binary file with " <<
         size << " nucleotides..." << '\n';

    State state = OK;
    char *memblock = new char;
    char tmp;
    char twoMask = 0b11;    // == 3, two ones in binary
    while (iStrm.read(memblock, sizeof(char)))
    {
        for (char it = 6; it >= 0 && size; it -= 2)
        {
            tmp = binToChar((*memblock >> it) & twoMask);
            oStrm.write(&tmp, sizeof(char));
            size--;
        }
    }
    return state;
}
