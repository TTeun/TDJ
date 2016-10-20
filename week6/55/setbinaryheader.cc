#include "main.ih"

void setBinaryHeader(ofstream &oStrm) {
    char tmp = 'b';
    oStrm.write(&tmp, sizeof(char));

    size_t sizeOfSeq = 0;
    oStrm.write(reinterpret_cast<char*>(&sizeOfSeq), sizeof(size_t));
}