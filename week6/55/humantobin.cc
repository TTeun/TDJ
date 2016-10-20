#include "main.ih"

State humanToBin(ofstream &oStrm, ifstream &iStrm)
{
    cout << "Converting to binary..." << '\n';
    setBinaryHeader(oStrm);

    size_t sizeOfSeq = 0;
    size_t counter = 0;

    char *memblock = new char;
    char tmp = 0;
    while (iStrm.read(memblock, sizeof(char)))
    {
        if (not correctInput(*memblock))
            return WRONGLETTER;

        tmp <<= 2;
        tmp += charToBin(*memblock);

        ++counter;
        ++sizeOfSeq;
        if (counter == 4) // one write for each for chars obtained
        {
            oStrm.write(&tmp, sizeof(char));
            counter = 0;
            tmp = 0;
        }
    }
    while (counter++ != 4)
        tmp <<= 2;

    oStrm.write(&tmp, sizeof(char));

    if (sizeOfSeq == 0)
        return EMPTYFILE;

    setBinarySize(oStrm, sizeOfSeq);
    return OK;
}
