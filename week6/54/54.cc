#include <fstream>
#include <iostream>
#include <csignal>
#include <string>
#include <linux/acct.h>

using namespace std;

enum Mode
{
    DEFAULT,
    ALL
};

Mode parseArguments(int argc, char **argv, string *path) {
    Mode mode;
    if (argc == 3) { // parsing three arguments
        if (string(argv[1]) == "-a")
            mode = ALL;
        else {
            cout << "Three arguments may only be supplied if "
                 "the first is the '-a' flag, and the second "
                 "argument is the path to file." << '\n';
            exit(1);
        }
        *path = argv[2];
    }

    if (argc == 2) // parsing two argument
        if (string(argv[1]) == "-a")
            mode = ALL;
        else
            *path = argv[1];
    return mode;
}

int main(int argc, char **argv)
{
    string path = "/var/log/account/pacct";
    Mode mode = parseArguments(argc, argv, &path);

    ifstream iStrm(path, ios::in | ios::binary);
    if (not iStrm.good())
        cout << "Error reading specified file" << '\n';

    char *memblock = new char[sizeof(acct_v3)];
    string error;
    while (iStrm.read(memblock, sizeof(acct_v3))) {
        acct_v3 *info = reinterpret_cast<acct_v3 *>(memblock);
        if (mode == ALL ||
                info->ac_exitcode != 0)
        {
            error = info->ac_exitcode == SIGKILL ? "SIGKILL" :
                    info->ac_exitcode == SIGTERM ? "SIGTERM" :
                    to_string(info->ac_exitcode);

            cout << '\'' << info->ac_comm << left << "'\t" <<
                 error << '\n';
        }
    }
    delete[] memblock;
}
