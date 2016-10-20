#include "main.ih"

size_t getBinarySize(ifstream &iStrm) {
    size_t size;
    iStrm.read(reinterpret_cast<char *>(&size), sizeof(size_t));
    // cout << "Reading a binary file with " <<
    //      size << " nucleotides..." << '\n';
    return size;
}