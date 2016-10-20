#include "main.ih"

int main(int argc, char ** argv) {
    if (argc < 3) {
        usage();
        return -1;
    }

    char const *oPath = argv[1];
    char const *iPath = argv[2];

    ofstream oStrm(oPath, ios::binary | ios::out | ios::trunc);
    ifstream iStrm(iPath, ios::binary | ios::in);
    Mode mode = argc == 4 ? TOBINARY : TOHUMAN;

    if (not streamsOk(oStrm, iStrm, mode))
        return -1;

    State (*fp)(ofstream&, ifstream&) =
        mode == TOHUMAN ? binToHuman : humanToBin;

    convert(oStrm, iStrm, fp);

    oStrm.close();
    iStrm.close();
}