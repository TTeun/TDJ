#include "main.ih"

void setBinarySize(ofstream &oStrm, size_t sizeOfSeq) {
    oStrm.clear();
    oStrm.seekp(1, ios::beg);
    oStrm.write(reinterpret_cast<char*>(&sizeOfSeq), sizeof(size_t));
}