#include <fstream>
#include <iostream>
#include <iomanip>
#include <csignal>
#include <string>
#include <linux/acct.h>

using namespace std;

enum Mode
{
    DEFAULT,
    ALL
};

int main() {
    ifstream iStrm("/var/log/account/pacct", ios::in | ios::binary);
    
    Mode mode = DEFAULT;
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

}