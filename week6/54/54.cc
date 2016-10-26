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

/* 
 * input as :    ./a.out (-a) (path) 
 * () means argument is optional.
 */

int main(int argc, char **argv) 
{
    Mode mode = DEFAULT;
    string path = "/var/log/account/pacct";
    if (argc > 1){
		if (string(argv[1]) = "-a"){
			mode = ALL;
			if (argc > 2)
				path = argv[2];
		}
		else
			path = argv[1];
	}
     
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
