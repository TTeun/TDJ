#include "main.ih"

State binToHuman(ofstream &oStrm, ifstream &iStrm)
{
    cout << "Converting to human-readable..." << '\n';
    if (not isBinFile(iStrm))
        return NOTBINARY;

    size_t sizeOfSeq = getBinarySize(iStrm);

    if (sizeOfSeq == 0)
        return EMPTYFILE;

    char *memblock = new char;
    char tmp;
    while (iStrm.read(memblock, sizeof(char)))
    {
        for (char it = 6; it >= 0 && sizeOfSeq; it -= 2)
        {
            // & with 0b11 == 3 to get two bits at a time
            tmp = binToChar((*memblock >> it) & 0b11);
            oStrm.write(&tmp, sizeof(char));
            --sizeOfSeq;
        }
    }
    return OK;
}
