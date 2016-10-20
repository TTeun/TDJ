#include "main.ih"

int main(int argc, char ** argv) {
    if (argc < 3) {
        cout << "Use as: \n" <<
             "./a.out outFile inFile -b" << '\n' <<
             "where the -b flag is optional" <<
             '\n';
        return -1;
    }

    char const *oPath = argv[1];
    char const *iPath = argv[2];


    ofstream oStrm(oPath, ios::binary | ios::out | ios::trunc);
    ifstream iStrm(iPath, ios::binary | ios::in);
    Mode mode = argc == 4 ? TOBINARY : TOHUMAN;

    if (not isCorrectQuery(oStrm, iStrm, mode))
        return -1;

    if (mode == TOHUMAN)
        cout << (binToHuman(oStrm, iStrm) == OK ?
                 "To human-readable success!" : "To human"
                 " conversion failed") << '\n';

    if (mode == TOBINARY)
        cout << (humanToBin(oStrm, iStrm) == OK ?
                 "To binary success!" : "To binary conversion"
                 " failed: Wrong charachter encountered") << '\n';

    oStrm.close();
    iStrm.close();
}