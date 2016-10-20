#include "main.ih"

State humanToBin(ofstream &oStrm, ifstream &iStrm)
{
    char tmp = 'b';
    oStrm.write(&tmp, sizeof(char));

    size_t sizeOfSeq = 0;
    oStrm.write(reinterpret_cast<char*>(&sizeOfSeq), sizeof(size_t));

    size_t counter = 0;
    char *memblock = new char;
    State state = OK;
    tmp = 0;
    while (iStrm.read(memblock, sizeof(char)))
    {
        if (not correctInput(*memblock))
            return WRONGINPUT;

        tmp <<= 2;
        tmp += charToBin(*memblock);
        counter++;
        if (counter == 4) {
            oStrm.write(&tmp, sizeof(char));
            counter = 0;
            tmp = 0;
        }
        ++sizeOfSeq;
    }
    if (counter != 0) {
        tmp <<= (2 * (4 - counter));
        oStrm.write(&tmp, sizeof(char));
    }

    oStrm.clear();
    oStrm.seekp(1, ios::beg);
    oStrm.write(reinterpret_cast<char*>(&sizeOfSeq), sizeof(size_t));

    return state;
}
